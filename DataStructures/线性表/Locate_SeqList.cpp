#include"SeqList.h"
//����˳����е�һ��ֵΪx��Ԫ������λ��

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