# Abstract Defination of Linear Table

ADT List {
数据元素 : D = {a1,a2,...,a(N)共N个同数据类型的元素}
数据关系 : R = {<a1,a2>,...,<a(N-1),a(N)>}
基本操作 : 
(1) InitList(&L)
操作结果:构造一个空的线性表L

(2) DestroyList(&L)
条件:线性表L存在
操作结果:销毁线性表L

(3) ListEmpty(L)
条件:线性表L存在
操作结果:如果L为空表返回TURE否则返回FALSE

(4) ListLength(L)
条件:线性表L存在
操作结果:返回L中元素个数

(5) GetElem(L,e,i)
条件:线性表L存在且1<=i<=ListLength(L)
操作结果:用e返回L中第i个元素数据的值

(6) LocateElem(L,e)
条件:线性表L存在
操作结果:返回L中第一个与e相等的元素的位置序号，若元素不存在返回值为0

(7) ClearList(&L)
条件:线性表L存在
操作结果:L重置为空表

(8) ListInsert(&L,i,e)
条件:线性表L存在且1<=i<=ListLength(L)+1
操作结果:在L中第i个元素前插入新元素e，L长度加一

(9) ListDelete(&L,i,&e)条件:线性表L存在且1<=i<=ListLength(L)
操作结果:在L中删除第i个元素，用e返回其值，L长度减一

｝ADT List
