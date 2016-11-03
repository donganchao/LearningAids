#include"LinkList.h"
#include<stdio.h>

LinkList* initLinkList(){
	LinkList *L;//*L表示头节点
	L = new LinkList;
	if(L == NULL){
		printf("Initialization failed!");
	}
	else{
		L->next = NULL;
		printf("Initialization succeeded!");
	}
	return L;
}