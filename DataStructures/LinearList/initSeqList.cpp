#include"SeqList.h"
#include<stdlib.h>



SeqList* initSeqList(){
	SeqList *L = new SeqList;
	if(L == NULL){
		printf("Initialization failed!\n");
		}
	else{ 
		L->length = 0;
		printf("Initialization succeeded!\n");
	}
	return L;
}


