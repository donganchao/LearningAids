#include"SeqList.h"
//ɾ��L�е�i��Ԫ��
int deleteSeqList(SeqList &L,int i){
	int k;
	if(i<0 || i>=L.length)
		return 0;
	else{
		for(k=i;k<L.length;k++)
			L.data[k]=L.data[k+1];
		L.length=L.length-1;
	}
	return 1;
}
