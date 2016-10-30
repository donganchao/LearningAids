// pr1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SeqList.h"

SeqList* initSeqList();
bool insertSeqList(SeqList &L,int x,int i);
bool deleteSeqList(SeqList &L,int i);

int _tmain(int argc, _TCHAR* argv[])
{
	SeqList *L;
	L = initSeqList();
//	L = NULL;
	if(L == NULL){
		printf("Initialization failed!\n");
	}
	else{
		printf("Initialization succeeded!\n");
	}

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
	
	for(j=0; j<L->length; j++)
		printf("%d\t",L->data[j]);
	//控制台显示检验结果

	system("pause");
	return 0;
}

