#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//���̷�Χ����������
#define ROW 9
#define COL 9

//��ֹ������Χ�׵ĸ���ʱ����Խ��
#define ROWS ROW+2
#define COLS COL+2

//�ɸ����׵ĸ���
#define EASY_COUNT 10

void initboard(char board[ROWS][COLS], int rows, int cols,char set);

void displayboard(char board[ROWS][COLS], int row, int col);

void setMine(char board[ROWS][COLS], int row, int col);

void findMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);