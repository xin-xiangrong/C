#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define  DEFAULT_CAPACITY            3
#define  MAX_NAME                        10
#define  MAX_GENDER                      5
#define  MAX_TEL                            30 
#define  MAX_ADDR                        30 

//ö�٣��оٹ���
enum Option
{
	EXIT, //Ĭ�ϴ�0��ʼ
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT,//6
	SAVE,//7
};
//��ϵ����Ϣ������
struct PeoInfo
{
	int  id;
	char name[MAX_NAME];
	char gender[MAX_GENDER];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
//ͨѶ¼����
struct Contact
{
	//Ƕ��һ����ϵ����Ϣ��һ���ṹ��
	struct PeoInfo* data;//ά����̬�ڴ��ָ��
	int size;//��¼��ǰ������ϵ�˵ĸ���
	int capacity;//��¼ͨѶ¼��ǰ����
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//���һ����ϵ�˵�ͨѶ¼
void AddContact(struct Contact* ps);
//��ʾ����ͨѶ¼
void ShowContact(const struct Contact* ps);
//��ͨѶ¼ɾ��һ��ָ����ϵ��
void DelContact(struct Contact* ps);
//��ͨѶ¼Ѱ��һ��ָ����ϵ��
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ�˵���Ϣ
void ModifyContact(struct Contact* ps);
//��ѧ������
void SortContact(struct Contact* ps);
//��������Ƿ��ã���������Ĭ��һ��������
int  CheckCapacity(struct Contact* ps);
//����ͨѶ¼���ͷŷ���Ķ�̬�ڴ棩
void DestroyContact(struct Contact* ps);
//�������ݵ��ļ�
void SaveContact(struct Contact* ps);
//������ϵ��
void LoadContact(struct Contact* ps);

