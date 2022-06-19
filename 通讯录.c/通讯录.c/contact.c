#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//初始化通讯录
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_CAPACITY * sizeof(struct PeoInfo));//初始化给通讯录分配默认动态内存
	ps->size = 0;//初始化当前通讯录元素个数为0
	ps->capacity = DEFAULT_CAPACITY;//默认容量

	//加载联系人
	LoadContact(ps);

}
//声明函数方便加载函数调用
int  CheckCapacity(struct Contact* ps);

void  LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp;//创建一个联系人的临时变量用来接收从文件读取的信息
	//打开文件
	FILE* pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)//打开文件失败
	{
		printf("LoadContact:: %s", strerror(errno));
		return;//返回而不返回值 提前结束函数
	}
	//fread函数返回值是 读取到的真正的元素个数，这里采用一个一个读取\
	若文件有数据读取一个fread的则函数返回值为1进入循环，若文件数据\
	已被读取完毕则返回0，退出循环
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);//存放前检测通讯录容量不够就扩容
	   //初始化通讯录时size为0
		ps->data[ps->size] = tmp;//将读出的数据存放进通讯录
		ps->size++;
	}
	//关闭文件
	fclose(pfread);
	pfread = NULL;
}

//因很多功能函数需要用到查找联系人，所以封装成一个函数方便调用，以减少代码的冗余
//加上static本文件可以调用
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//找到联系人，返回该联系人的位置
		}
	}
	return -1;//没找到，返回-1
}

int  CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//当通讯录当前人数等于容量时进行扩容一次默认扩充两个空间
		//参数1.要调整的内存地址 2.调整之后的大小（单位字节）
		struct PeoInfo* str = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (str != NULL)
		{
			ps->data = str;//开辟成功把地址赋给原来的指针继续维护
			ps->capacity += 2;//通讯录的容量加2
			printf("增容成功\n");
			return 1;
		}
		else
		{
			printf("增容失败\n");
			return -1;
		}
	}
}

//添加一个联系人到通讯录
void AddContact(struct Contact* ps)
{
	int ret = 0;
	if (ret = CheckCapacity(ps) == -1)
	{
		printf("添加失败\n");
	}
	else
	{
		printf("输入学号：");
		//因学号的数据类型为整形 须取地址操作 
		//其余为数组名本就为地址 则无需取地址
		scanf("%d", &(ps->data[ps->size].id));

		printf("输入姓名：");
		scanf("%s", ps->data[ps->size].name);

		printf("输入性别：");
		scanf("%s", ps->data[ps->size].gender);

		printf("输入电话：");
		scanf("%s", ps->data[ps->size].tel);

		printf("输入住址：");
		scanf("%s", ps->data[ps->size].addr);

		printf("添加成功\n");

		ps->size++;//每加一个联系人当前通讯录元素个数加1

	}


}

//显示整个通讯录
void ShowContact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-5s  %-10s  %-5s  %-10s  %-30s \n", "学号", "姓名", "性别",  "电话", "地址");
		//将通讯录里每个联系人的信息一一打印出来
		//打印size（当前通讯录几个联系人）个信息
		for (i = 0; i < ps->size; i++)
		{
			// "-5"号表示左对齐，打印长度为5
			printf("%-5d  %-10s  %-5s  %-10s  %-30s \n",
				ps->data[i].id,
				ps->data[i].name,
				ps->data[i].gender,
				ps->data[i].tel,
				ps->data[i].addr);
		}
		printf("当前已有%d位联系人\n", ps->size);
	}

}

//从通讯录删除一个指定联系人
void DelContact(struct Contact* ps)
{
	int j = 0;
	int pos = 0;//创建一个变量来接收要删除联系人的位置
	char name[MAX_NAME];
	printf("请输入要删除人的名字：");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("没有找到此人\n");
	}
	else
	{
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];//将要删除联系人的后面的联系人的位置都向前移动一个位置覆盖要删除的联系人
		}
		printf("删除成功\n");
		ps->size--;
	}
}

//从通讯录寻找一个指定联系人
void SearchContact(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要寻找人的名字：");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("没有找到此人\n");
	}
	else
	{
		//找到了打印信息
		printf("找到了\n");
		printf("%-5s  %-10s  %-5s  %-10s  %-30s \n", "学号", "姓名", "性别", "电话", "地址");
		printf("  %-5d%-10s  %-5s  %-10s  %-30s \n",
			ps->data[pos].id,
			ps->data[pos].name,
			ps->data[pos].gender,
			ps->data[pos].tel,
			ps->data[pos].addr);
	}
}

//修改指定联系人的信息
void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入要修改的人的名字：");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("没有找到此人\n");
	}
	else
	{
		//找到该联系人重新录一遍信息，完成修改
		printf("输入学号：");
		scanf("%d", &(ps->data[pos].id));

		printf("输入姓名：");
		scanf("%s", ps->data[pos].name);

		printf("输入性别：");
		scanf("%s", ps->data[pos].gender);


		printf("输入电话：");
		scanf("%s", ps->data[pos].tel);

		printf("输入住址：");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}

//这里按照学号排序
int  cmp_stu_by_name(const void* e1, const void* e2)
{
	//若想按照其他排序排序方法修改此函数即可
	return  ((struct PeoInfo*)e1)->id - ((struct PeoInfo*)e2)->id;
}

//按学号排序
void SortContact(struct Contact* ps)
{
	//利用qsort库函数排序
	qsort(ps->data, ps->size, sizeof(struct PeoInfo), cmp_stu_by_name);
	//自主实现按学号排序
	 //int i=0;
	 //int j=0;
	 //int flag=1;
	 //struct PeoInfo tmp;
	 //for(i=0; i<ps->size; i++)
	 //{
	 //	for(j=0; j<ps->size-i-1;j++)
	 //	{
	 //		if(ps->data[j].id -  ps->data[j+1].id)//升序
	 //		{
	 //		    tmp= ps->data[j] ;
	 //			ps->data[j]  = ps->data[j+1];
	 //			ps->data[j+1] =  tmp;
	 //		    flag=0;
	 //		}
	 //	}
	 //	if ( flag==1 )
	 //	{
	 //		break;
	 //	}
	 //}
	ShowContact(ps);
}
//销毁通讯录（释放分配的动态内存）
void DestroyContact(struct Contact* ps)
{
	free(ps->data);//释放分配的动态内存
	ps->data = NULL;
}
//保存数据到文件
void SaveContact(struct Contact* ps)
{
	int i = 0;
	//打开文件
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)//打开文件失败
	{
		printf("SaveContact:: %s", strerror(errno));
		return;//返回而不返回值 提前结束函数
	}
	for (i = 0; i < ps->size; i++)
	{
		//将已有的联系人依次保存到文件
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfwrite);
	}
	//关闭文件
	fclose(pfwrite);
	pfwrite = NULL;
}



