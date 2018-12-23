#include"SeqList.h"

void SeqListInit(SeqList* p, int capicity)
{
	assert(p->array != NULL);

	//初次扩容
	p->array = (SLDataType*)malloc(sizeof(SLDataType)*capicity);
	//在函数开始处检验传入参数的合法性，返回值:缓冲区当前长度 
	assert(p->array);

	p->size = NULL;
	p->capicity = capicity;
}

void SeqListDestory(SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);

	free(p->array);
	
	p->array = NULL;
	p->capicity = 0;
	p->size;
}

void CheckCapicity(SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(p->size <= p->capicity);

	if (p->size < p->capicity)
	{
		return;
	}

	SLDataType capicity = 2 * p->capicity;
	SLDataType *array = (SLDataType*)malloc(sizeof(SLDataType)*capicity);
	assert(array);

	//把数据搬过来
	for (int i = 0; i < p->size; i++)
	{
		array[i] = p->array[i];
	}

	//在将原来的释放掉，再将现在的由原来表示
	free(p->array);
	p->array = array;
	p->capicity = capicity;
}

void SeqListPushBack(SeqList* p, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);

	CheckCapicity(p);

	p->array[p->size] = value;
	p->size++;
}

void SeqListPopBack(SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(p->size > 0);

	p->size--;
}

void SeqListPushFront(SeqList* p, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);

	CheckCapicity(p);

	//数据后移
	for (int i = p->size; i > 0; i--)
	{
		p->array[i] = p->array[i - 1];
	}

	p->array[0] = value;
	p->size++;
}

void SeqListPopFront(SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(p->size > 0);

	//数据前移
	for (int i = 0; i < p->size - 1; i++)
	{
		p->array[i] = p->array[i + 1];
	}
	p->size--;
}

int SeqListFind(const SeqList* p, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);

	for (int i = 0; i < p->size; i++)
	{
		if (p->array[i] == value)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* p, int pos, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(pos >= 0 && pos < p->size);

	CheckCapicity(p);

	//先将pos处往后移
	for (int i = p->size; i > pos; i--)
	{
		p->array[i] = p->array[i - 1];
	}

	p->array[pos] = value;
	p->size++;
}

void SeqListErase(SeqList* p, int pos)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(p->size > 0);
	assert(pos >= 0 && pos < p->size);

	for (int i = pos; i < p->size; i++)
	{
		p->array[i] = p->array[i + 1];
	}
	p->size--;
}

void SeqListRemove(SeqList* p, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);

	int pos = SeqListFind(p, value);
	if (pos != -1)
	{
		SeqListErase(p, pos);
	}
}

void SeqListModify(SeqList* p, int pos, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);
	assert(pos >= 0 && pos < p->size);

	p->array[pos] = value;
}

void SeqListPrint(const SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);

	for (int i = 0; i < p->size; i++)
	{
		printf("%d ", p->array[i]);
	}
	printf("\n");
}

int SeqListEmpty_Size(const SeqList* p)
{
	if (p->size == 0)
	{
		return 0;
	}
	else
	{
		return p->size;
	}
}

void SeqListBubbleSort(SeqList* p)
{
	assert(p->array != NULL);
	assert(p != NULL);
	int isSorted = 0;
	for (int i = 0; i < p->size - 1; i++)
	{
		isSorted = 1;
		for (int j = 0; j < p->size - 1 - i; j++)
		{
			if (p->array[j] > p->array[j + 1])
			{
				p->array[j] ^= p->array[j + 1];
				p->array[j + 1] ^= p->array[j];
				p->array[j] ^= p->array[j + 1];
				isSorted = 0;
			}
		}
		if (isSorted == 1)
		{
			break;
		}
	}
}

int SeqListBinaryFind(const SeqList* p, SLDataType value)
{
	assert(p->array != NULL);
	assert(p != NULL);

	int left = 0;
	int right = p->size;
	while (left < right)
	{
		int mid = (right - left) / 2 + left;
		if (p->array[mid] == value)
		{
			return mid;
		}
		else if (p->array[mid] > value)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}