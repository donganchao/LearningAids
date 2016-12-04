#define MAXSIZE
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
#define MAXSIZE 100
	int data[MAXSIZE];	//假设该栈存放数据为int类型
	int length;
	int *top;
}SeqStack;