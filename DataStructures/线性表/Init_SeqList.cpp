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

//��������˳����ɹ�ʱӦ����һ��������룬��-1���Զ�������SeqList��ƥ�䣬�����Ƿ�Ӧ����throw�׳��쳣��ʵ��