#include"SeqList.h"
//查找顺序表中第一个值为x的元素所在位置

int locateSeqList(SeqList &L,int x){
	int i = 0;
	while (i<L.length&&x!=L.data[i]){
		i++;
	}
	if(i>L.length)
		return false;
	else{
		return i+1;
	}


}