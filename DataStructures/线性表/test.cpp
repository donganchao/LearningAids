// pr1.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//����Init_SeqList����

	int i,j,x;
	x = 1;
	for(i = 0; i<50; i++){
		insertSeqList(*L,x++,i);
	}
	//�ò����㷨����һ��1-50����Ȼ������

	insertSeqList(*L,101,2);
	deleteSeqList(*L,45);
	//����Insert_SeqList��Delete_SeqList����
	
	for(j=0; j<L->length; j++)
		printf("%d\t",L->data[j]);
	//����̨��ʾ������

	system("pause");
	return 0;
}

