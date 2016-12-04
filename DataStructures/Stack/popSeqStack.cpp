#include "SeqStack.h"

bool popSeqStack(SeqStack &S,int &m){        //删除栈顶元素，并用m返回其值
	if(S.length == 0){
		printf("栈已空，删除失败！");
		return false;
	}
	else{
		m = * --S.top;
		return true;
	}
}