#include "LinkList.h"

//尾插建表法
LinkList* createLinkListT(){
	LinkList *L,*p,*r; //*L表示头结点，*r表示尾结点，*p表示其他结点
	int x;
	L = new LinkList;
	L->next = NULL;
	r = L;
	while (scanf("%d",&x)!= EOF){
		p = new LinkList; //插入的结点成为链表的尾结点，未插入前的尾结点指针应修改为指向该节点
		p->data = x;
		r->next = p;
		r = p;
	}
	r->next = NULL;
	return L;
}