#pragma once
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void initboard(char board[ROW][COL],int row,int col);

//显示棋盘
void displayboard(char board[ROW][COL], int row, int col);
//玩家下棋

void palyermove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢返回'*'
//电脑赢返回'#'
//平局返回'q'
//继续返回'c'
char iswin(char board[ROW][COL], int row, int col);