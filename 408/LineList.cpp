#include "LineList.h"

int Length(SqList L) {
	return L.length;
}//读取表长

int LocateElem(SqList& L, ElemType t) {
	for (int i = 0; i < L.length; i++) {
		if (L.datas[i] == t) return i;
	}

	cout << t << "不存在" << endl;
	return -1;
}//查找元素下标

ElemType GetElem(SqList& L, int idx) {
	return L.datas[idx - 1];
}//按位查找元素


void InsertElem(SqList& L, ElemType t, int idx) {
	for (int i = L.length - 1; i >= idx; i--) {
		L.datas[i + 1] = L.datas[i];
	}
	L.datas[idx] = t;
	L.length++;
}//插入元素

void DelElem(SqList& L, ElemType t) {
	int k = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.datas[i] == t) k++;
		else {
			L.datas[i - k] = L.datas[i];
		}
	}
	L.length = L.length - k;
}//删除指定的元素

bool Empty(SqList& L) {
	return !L.length;
}//判空

void PrintList(SqList& L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.datas[i] << " ";
	}
	cout << endl;
}//打印表


/*
int main() {
	SqList L;
	ElemType testdatas[10] = { 1,4,5,7,13,45,45,87,12,0 };
	for (int i = 0; i < 10; i++) {
		InsertElem(L, testdatas[i], L.length);
	}

	PrintList(L);

	int idx = LocateElem(L, 13);
	cout << "13在第" << idx + 1 << "位" << endl;

	LocateElem(L, 6);

	cout << "第5位元素是" << GetElem(L, 5) << endl;

	DelElem(L, 45);
	PrintList(L);

	return 0;
}*/