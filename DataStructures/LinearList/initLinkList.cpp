#include"LinkList.h"
#include<stdio.h>

LinkList* initLinkList(){
	LinkList *L;//*L表示头节点
	L = new LinkList;
	if(L == NULL){
		printf("Initialization failed!\n");
	}
	else{
		L->next = NULL;
//		L->data = -1;
		printf("Initialization succeeded!\n");
	}
	return L;
}