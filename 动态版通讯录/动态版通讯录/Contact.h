#pragma once

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#define DEFAULT_SZ 3
#define INCREASE_SZ 2

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATA 1000
//ö��
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

//����һ���˵���Ϣ
typedef struct Person
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_NAME];
	char addr[MAX_ADDR];
}Person;

//����һ��ͨѶ¼

////��̬�汾
//typedef struct Contact
//{
//	 Person data[MAX_DATA];//����˵���Ϣ
//	int count;
//
//}Contact;

//��̬�汾
typedef struct Contact
{
	Person* data;//����˵���Ϣ��ά��ͨѶ¼��ָ��
	int count;//��¼ͨѶ¼��ʵ����ϵ�˵ĸ���
	int capacity;//��ǰͨѶ¼������

}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//�����ϵ��
void AddContact(Contact* pc);
//ɾ����ϵ��
void DelContact(Contact* pc);
//������ϵ��
void SearchContact(Contact* pc);
//�޸���ϵ��
void ModifyContact(Contact* pc);
//��ʾ��ϵ��
void ShowContact(Contact* pc);
//�����ϵ��
void ClearContact(Contact* pc);
//������ϵ��
void SortContact(Contact* pc);
//�ͷ�ͨѶ¼��̬�ڴ�
void DestroyContact(Contact* pc);