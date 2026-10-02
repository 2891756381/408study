#include<iostream>
#include "LineList.h"
#include "LinkList.h"
using namespace std;



int main() {
	LNode* Head;
	InitLinkList(Head);
	ElemType testdatas[10] = { 1,4,5,7,13,45,45,87,12,0 };
	for (int i = 0; i < 10; i++) {
		HeadInsert(Head, testdatas[i]);
	}

	PrintList(Head);

	LNode* End = Head;
	while (End->next != NULL) {
		End = End->next;
	}

	for (int i = 0; i < 10; i++) {
		EndInsert(End, testdatas[i]);
		End = End->next;
	}
	PrintList(Head);

	return 0;
}