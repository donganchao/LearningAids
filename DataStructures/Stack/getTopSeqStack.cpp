#include "SeqStack.h"


bool getTopSeqStack(SeqStack &S,int &m){     //获取栈顶元素的值
	if(S.length == 0){
		printf("栈已空，栈顶元素不存在！");
		return false;
	}
	else{
		m = *(S.top-1);
		return true;
	}
}