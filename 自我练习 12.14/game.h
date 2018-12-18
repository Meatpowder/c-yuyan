#ifndef _GAME_H_
#define _GAME_H_

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
#include<string.h>

#define ROW 3
#define COL 3

void InitPaly(char arr[ROW][COL], int row, int col);
void PrintBoard(char arr[ROW][COL], int row, int col);
int IsFull(char arr[ROW][COL], int row, int col);
void ManPaly(char arr[ROW][COL], int row, int col);
void CompterPaly(char arr[ROW][COL], int row, int col);
int CheakWin(char arr[ROW][COL], int row, int col);


#endif _GAME_H_