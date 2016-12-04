#include "SeqStack.h"

SeqStack* initSeqStack(){
	SeqStack *S = new SeqStack;
	if(S == NULL){
		printf("Initialization failed!\n");
	}
	else{
		S->length = 0;
		S->top = &S->data[0];
		printf("Initialization succeeded!\n");
		return S;
	}
}