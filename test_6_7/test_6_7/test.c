#define _CRT_SECURE_NO_WARNINGS 1
//18.	��дһ������ʹ��λ���㽫һ�������ͱ��� data �ĸ��ֽں͵��ֽڷֱ������
#include<stdio.h>
int main()
{
	short int data = 0;
	printf("����һ��short��Χ�ڵ�����:>");
	scanf("%hd", &data);
	short int low = data & 0x00ff;
	short int high = data & 0xff00;

	printf("data=0x%x ���ֽ�=0x%x\n", data, low);
	printf("data=0x%x ���ֽ�=0x%x\n", data, high);

	return 0;
}



