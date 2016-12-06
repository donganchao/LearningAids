#include "SeqStack.h"

bool pushSeqStack(SeqStack &S,int x){		//假设入栈元素为int类型
	if(S.length == MAXSIZE){
		printf("入栈失败，栈已满！");
		return false;
	}
	else{
		*S.top = x;
		S.top ++;
		S.length ++;
		return true;
	}
}