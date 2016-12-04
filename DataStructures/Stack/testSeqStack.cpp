// pr3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SeqStack.h"

SeqStack* initSeqStack();
bool pushSeqStack(SeqStack &S,int x);
bool popSeqStack(SeqStack &S,int &m);
bool getTopSeqStack(SeqStack &S,int &m);

int _tmain(int argc, _TCHAR* argv[])
{
	SeqStack *S = initSeqStack();

	for(int i=0;i<10;i++){
		pushSeqStack(*S,i);	
	}

	int *q = S->top;
	int l = S->length;
	for(int j=0;l>j;l--){
		printf("%d\t",*(--q));
	}

	int topValue;
	popSeqStack(*S,topValue);
	printf("%d\n",topValue);

	getTopSeqStack(*S,topValue);
	printf("%d\n",topValue);

//	printf("%d\n",*S->top);    pop函数并没有删除栈顶元素，只是修改了指针位置


	system("pause");
	return 0;
}

