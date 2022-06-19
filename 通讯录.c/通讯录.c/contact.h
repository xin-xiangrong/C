#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define  DEFAULT_CAPACITY            3
#define  MAX_NAME                        10
#define  MAX_GENDER                      5
#define  MAX_TEL                            30 
#define  MAX_ADDR                        30 

//枚举，列举功能
enum Option
{
	EXIT, //默认从0开始
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	SAVE,//7
};
//联系人信息的类型
struct PeoInfo
{
	int  id;
	char name[MAX_NAME];
	char gender[MAX_GENDER];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
//通讯录类型
struct Contact
{
	//嵌套一个联系人信息的一个结构体
	struct PeoInfo* data;//维护动态内存的指针
	int size;//记录当前已有联系人的个数
	int capacity;//记录通讯录当前容量
};


//初始化通讯录
void InitContact(struct Contact* ps);
//添加一个联系人到通讯录
void AddContact(struct Contact* ps);
//显示整个通讯录
void ShowContact(const struct Contact* ps);
//从通讯录删除一个指定联系人
void DelContact(struct Contact* ps);
//从通讯录寻找一个指定联系人
void SearchContact(const struct Contact* ps);
//修改指定联系人的信息
void ModifyContact(struct Contact* ps);
//按学号排序
void SortContact(struct Contact* ps);
//检测容量是否够用，不够扩容默认一次扩两个
int  CheckCapacity(struct Contact* ps);
//销毁通讯录（释放分配的动态内存）
void DestroyContact(struct Contact* ps);
//保存数据到文件
void SaveContact(struct Contact* ps);
//加载联系人
void LoadContact(struct Contact* ps);

