#define MAXSIZE 100			//定义最大长度
#include<stdlib.h>
#include<stdio.h>


typedef struct SeqList{
#define MAXSIZE 100			//定义最大长度
	int data[MAXSIZE];
	int length;	//length记录线性表最后一个元素在数组中位置
}SeqList;


