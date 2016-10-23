#include"SeqList.h"
//在L的第i个元素前插入一个元素x（这里假设是个int型元素）
int insertSeqList(SeqList &L,int x,int i){
	int k;
	if(i<0 || i>L.length || L.length==MAXSIZE){
		return 0;
	}
	else{
		for(k=L.length;k>=i;k--)
			L.data[k]=L.data[k-1];
		L.data[i]=x;
		L.length =L.length+1;
	}
	return 1;
}