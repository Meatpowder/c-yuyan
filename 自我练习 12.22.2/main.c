#include"SeqList.h"

//静态顺序表
//#define N 100
//typedef int SLDataType;

//typedef struct SeqList
//{
//	SLDataType array[N];//定义长数组
//	size_t size;        //有效数据的个数
//}SepList;
//
////动态顺序表
//typedef int SLDataType;
//
//typedef struct SeqList
//{
//	SLDataType *array;//指向动态开辟的数组
//	size_t size;      //有效数据的个数
//	size_t capicity;  //容量空间大小
//};

void Test1()
{
	SeqList p;

	SeqListInit(&p, 5);

	SeqListPushFront(&p, 2);
	SeqListPushFront(&p, 5);
	SeqListPushFront(&p, 8);
	//8 5 2

	SeqListPushBack(&p, 12);
	SeqListPushBack(&p, 45);
	SeqListPushBack(&p, 78);
	//8 5 2 12 45 78

	SeqListErase(&p, 2);
	//8 5 12 45 78

	SeqListModify(&p, 2, 99);
	//8 5 99 45 78

	SeqListRemove(&p, 99);
	//8 5 45 78

	SeqListPopFront(&p);
	//5 45 78

	SeqListPopBack(&p);
	//5 45

	SeqListEmpty_Size(&p);
	SeqListPrint(&p);

	SeqListDestory(&p);
}

void Test2()
{
	SeqList p;

	SeqListInit(&p, 10);

	SeqListPushFront(&p, 1);
	SeqListPushFront(&p, 4);
	SeqListPushFront(&p, 7);

	SeqListPushBack(&p, 9);
	SeqListPushBack(&p, 3);
	SeqListPushBack(&p, 6);

	SeqListBubbleSort(&p);
	SeqListBinaryFind(&p, 6);

	SeqListPrint(&p);

	SeqListDestory(&p);
}

int main()
{
	//Test1();
	Test2();
	system("pause");
	return 0;
}