#include "LinkList.h"
//在第i个结点后插入元素x（第一个结点为头结点，假设x为int型）


LinkList* insertLinkList(LinkList *L,int i,int x){   //*L为头结点
	if(i<1){
		printf("插入失败，请输入大于1的整数！");
		return L;
	}

	int n=1;  //n用来统计当前链表结点数
	LinkList *p = L; //初始从头结点开始统计
	while (p->next != NULL){
		p = p->next;
		n++;
	}

	if(i>n){
		printf("插入失败，插入位置超出链表长度！");
		return L;
	}

	LinkList *r,*s;		//*r是第i个结点，*s是插在后面的新结点
	r = L;
	for(int j=1;j<i;j++){
		r = r->next;
	}
	s = new LinkList;
	s->data = x;
	s->next = r->next;
	r->next = s;
	return L;
}