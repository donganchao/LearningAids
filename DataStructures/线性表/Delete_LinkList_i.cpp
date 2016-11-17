#include "LinkList.h"
//删除第i个结点，头结点除外（按位置）

LinkList* deleteLinkList_i(LinkList *L,int i){
	LinkList *p,*r,*s;
	
	int n=1;  //n用来统计当前链表结点数，头结点为第一个结点
	p = L; //初始从头结点开始统计
	while (p->next != NULL){
		p = p->next;
		n++;
	}

	if(i<=1||i>n){
		printf("删除的位置不合理，删除失败！");
		return L;
	}
	else{
		r = L;
		int j = 1;
		while (j < i-1){    //找到要删除结点的前一个结点
			r = r->next;
		}
		s = r->next;
		r->next = s->next;
		return L;
	}
}