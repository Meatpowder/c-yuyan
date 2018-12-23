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

//��ʼ��
void SeqListInit(SeqList* p, int capicity);

//����
void SeqListDestory(SeqList* p);

//����
void CheckCapicity(SeqList* p);

//β��
void SeqListPushBack(SeqList* p, SLDataType value);

//βɾ
void SeqListPopBack(SeqList* p);

//ͷ��
void SeqListPushFront(SeqList* p, SLDataType value);

//ͷɾ
void SeqListPopFront(SeqList* p);

//�в�
void SeqListInsert(SeqList* p, int pos, SLDataType value);

//��ɾ
void SeqListErase(SeqList* p, int pos);

//�Ƴ����ҵ�value���Ƴ�
void SeqListRemove(SeqList* p, SLDataType value);

//�޸�
void SeqListModify(SeqList* p, int pos, SLDataType value);

//���
void SeqListPrint(const SeqList* p);

//�ж�˳����Ƿ�Ϊ��,���������
int SeqListEmpty_Size(const SeqList* p);

//ð������
void SeqListBubbleSort(SeqList* p);

//����,��������
int SeqListFind(const SeqList* p, SLDataType value);

//�۰���ң���Ҫ����
int SeqListBinaryFind(const SeqList* p, SLDataType value);

#endif      _SEQLIST_H_