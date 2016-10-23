#include"SeqList.h"
SeqList *initSeqList(){
	SeqList *L;
	L=new SeqList;
	return L;
/*if(L){
		L->length=-1;
		return L;
		}
	else return -1;	*/
}

//考虑申请顺序表不成功时应返回一个错误代码，但-1与自定义类型SeqList不匹配，具体是否应该用throw抛出异常来实现