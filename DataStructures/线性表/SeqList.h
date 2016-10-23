#define MAXSIZE 100			//定义最大长度
typedef struct SeqList{
	int data[MAXSIZE];
	int length;	//length记录线性表最后一个元素在数组中位置
}SeqList;