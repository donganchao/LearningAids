#include "LinkList.h"
//查找链表中第一个值为x的元素（按值查找）

LinkList* locateLinkList_x(LinkList *L,int x){
	LinkList *p;
	p = L;
	while(p->next != NULL && p->data != x){
		p = p->next;
	}

	if(p->data == x){
		return p;
	}
	else{
		printf("要查找的值在该链表不存在！\n");
		return L;
	}
}