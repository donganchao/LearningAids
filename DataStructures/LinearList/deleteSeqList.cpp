#include"SeqList.h"
//删除L中第i个位置后的元素
bool deleteSeqList(SeqList &L,int i){
	int k;
	if(i<0 || i>=L.length)
		return false;
	else{
		for(k=i;k<L.length;k++)
			L.data[k]=L.data[k+1];
		L.length=L.length-1;
	}
	return true;
}
