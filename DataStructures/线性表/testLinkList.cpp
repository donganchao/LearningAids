// pr2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "LinkList.h"

LinkList* initLinkList();
LinkList* insertLinkList(LinkList *L,int i,int x);
LinkList* deleteLinkList_i(LinkList *L,int i);
LinkList* deleteLinkList_x(LinkList *L,int x);
LinkList* locateLinkList_i(LinkList *L,int i);
LinkList* locateLinkList_x(LinkList *L,int x);

int _tmain(int argc, _TCHAR* argv[])
{
	LinkList *L = initLinkList();
	//测试初始化函数initLinkList

	for(int i=0;i<10;i++){
		L = insertLinkList(L,i+1,i);
	}
	L = insertLinkList(L,3,100);
	//测试插入函数insertLinkList

	L = deleteLinkList_i(L,3);
	//测试按序删除函数

	L = deleteLinkList_x(L,9);
	//测试按值删除函数

//	L = locateLinkList_i(L,5);
	//测试按序查找函数

	L = locateLinkList_x(L,100);
	//测试按值查找函数

	while (L != NULL){
		printf("%d\t",L->data);
		L = L->next;
	}


	system("pause");
	return 0;
}

