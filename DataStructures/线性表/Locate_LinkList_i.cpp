#include "LinkList.h"
//查找链表中的元素（按位置查找）

LinkList* locateLinkList_i(LinkList *L,int i){
	LinkList *p,*q;

	int n=1; //用n来统计结点数，头结点为第一个结点
	p = L;
	while (p->next != NULL){
		p = p->next;
		n++;
	}

	if(i<=1 || i>n){
		printf("查找位置不合理，查找失败！");
		return L;
	}
	else{
		q = L;
		for(int m=1;m<i;m++){
			q = q->next;
		}
		return q;
	}
}