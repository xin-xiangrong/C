#pragma once

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATA 1000
//枚举
enum Optint
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
};

//定义一个人的信息
typedef struct Person
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_NAME];
	char addr[MAX_ADDR];
}Person;

//定义一个通讯录
typedef struct Contact
{
	Person data[MAX_DATA];//存放人的信息
	int count;

}Contact;

//初始化通讯录
void InitContact(Contact* pc);
//添加联系人
void AddContact(Contact* pc);
//删除联系人
void DelContact(Contact* pc);
//搜索联系人
void SearchContact(Contact* pc);
//修改联系人
void ModifyContact(Contact* pc);
//显示联系人
void ShowContact(Contact* pc);
//清空联系人
void ClearContact(Contact* pc);
//排序联系人
void SortContact(Contact* pc);