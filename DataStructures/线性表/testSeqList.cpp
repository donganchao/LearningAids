// pr1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SeqList.h"

SeqList* initSeqList();
bool insertSeqList(SeqList &L,int x,int i);
bool deleteSeqList(SeqList &L,int i);
int locateSeqList(SeqList &L,int x);

int _tmain(int argc, _TCHAR* argv[])
{
	SeqList *L;
	L = initSeqList();
	//测试Init_SeqList函数

	int i,j,x;
	x = 1;
	for(i = 0; i<50; i++){
		insertSeqList(*L,x++,i);
	}
	//用插入算法导入一个1-50的自然数序列

	insertSeqList(*L,101,2);
	deleteSeqList(*L,45);
	//测试Insert_SeqList和Delete_SeqList函数
	
	j = locateSeqList(*L,30);
	//测试Locate_SeqList函数

	for(int m=0; m<L->length; m++){
		printf("%d\t",L->data[m]);
	}
	printf("该元素第一次出现在表的%d处\n",j);
	//控制台显示检验结果

	system("pause");
	return 0;
}

