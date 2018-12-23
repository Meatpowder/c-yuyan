#ifndef     _SEQLIST_H_
#define     _SEQLIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType *array;
	int size;
	int capicity;
}SeqList;

//初始化
void SeqListInit(SeqList* p, int capicity);

//销毁
void SeqListDestory(SeqList* p);

//扩容
void CheckCapicity(SeqList* p);

//尾插
void SeqListPushBack(SeqList* p, SLDataType value);

//尾删
void SeqListPopBack(SeqList* p);

//头插
void SeqListPushFront(SeqList* p, SLDataType value);

//头删
void SeqListPopFront(SeqList* p);

//中插
void SeqListInsert(SeqList* p, int pos, SLDataType value);

//中删
void SeqListErase(SeqList* p, int pos);

//移除，找到value并移除
void SeqListRemove(SeqList* p, SLDataType value);

//修改
void SeqListModify(SeqList* p, int pos, SLDataType value);

//输出
void SeqListPrint(const SeqList* p);

//判断顺序表是否为空,并输出个数
int SeqListEmpty_Size(const SeqList* p);

//冒泡排序
void SeqListBubbleSort(SeqList* p);

//查找,不用排序
int SeqListFind(const SeqList* p, SLDataType value);

//折半查找，需要排序
int SeqListBinaryFind(const SeqList* p, SLDataType value);

#endif      _SEQLIST_H_