#include"SeqList.h"
#include<stdlib.h>



SeqList* initSeqList(){
	SeqList *L = new SeqList;
	if(L){
		L->length = 0;
		return L;
		}
	else 
		return NULL; //NULL在stdlib.h中定义
}


