#include "LinkList.h"

//头插建表法
LinkList* createLinkListH(){
	LinkList *L,*p;  //*L表示头结点，*p表示其他结点
	int x;
	L = new LinkList;
	L->next = NULL;
	while (scanf("%d",&x)!= EOF){
		p = new LinkList; //插入的结点在链表头结点后，该结点指针应指向未插入前头结点指针指向的结点
		p->data = x;
		p->next = L->next;
		L->next = p;
	}
	return L;
}