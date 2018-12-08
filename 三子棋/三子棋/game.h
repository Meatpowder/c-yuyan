#ifndef     __GAME_H__
#define     __GAME_H__

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include<time.h>

#define ROW 3
#define COL 3


void dispaly(char arr1[ROW][COL], int row, int col);
void input_board(char arr1[ROW][COL], int row, int col);
void man_paly(char arr1[ROW][COL], int row, int col);
void computer_paly(char arr1[ROW][COL], int row, int col);
int is_full(char arr1[ROW][COL], int row, int col);
int cheak_win(char arr1[ROW][COL], int row, int col);


#endif     __GAME_H__
