#include "LinkList.h"
//删除链表中第一个值为x的结点

LinkList* deleteLinkList(LinkList *L,int x){     //*L为头结点，假设元素x为int型
	LinkList *p,*q;
	p = L;
	while (p->next != NULL && p->next->data != x){
		p = p->next;
	}
	if(p->next->data == x){
		q = p->next;
		p->next = q->next;
		delete q;
		return L;
	}
	else{
		printf("删除的元素不存在，删除失败！");
		return L;
	}
}

		
