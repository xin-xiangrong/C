#pragma once
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//��ʼ������
void initboard(char board[ROW][COL],int row,int col);

//��ʾ����
void displayboard(char board[ROW][COL], int row, int col);
//�������

void palyermove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ����'*'
//����Ӯ����'#'
//ƽ�ַ���'q'
//��������'c'
char iswin(char board[ROW][COL], int row, int col);