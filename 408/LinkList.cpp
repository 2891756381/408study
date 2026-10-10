#include "LinkList.h"
//初始化链表
void InitLinkList(LNode*& Head) {
	Head = new LNode;
}
//头插法
void HeadInsert(LNode* Head, ElemType e) {
	LNode* p = new LNode;
	p->data = e;
	p->next = Head->next;
	Head->next = p;
}
//尾插法
void EndInsert(LNode* End, ElemType e) {
	LNode* p = new LNode;
	p->data = e;
	End->next = p;
}
//打印表
void PrintList(LNode* Head) {
	LNode* p = Head;
	while (p->next != NULL) {
		p = p->next;
		cout << p->data << ' ';
	}
	cout << endl;
}
//删除链表
void DelList(LNode*& Head) {
	LNode* p = Head;
	while (p != NULL) {
		LNode* temp = p;
		p = p->next;
		delete temp;
	}
	Head = NULL;
}
//反转链表
void ReverseList(LNode* head) {
	LNode* p = head->next->next, * q;
	head->next->next = NULL;
	while (p != NULL) {
		q = p->next;
		p->next = head->next;
		head->next = p;
		p = q;
	}
}

/*int main() {
	LNode* Head;
	InitLinkList(Head);
	ElemType testdatas[10] = { 1,4,5,7,13,45,45,87,12,0 };
	for (int i = 0; i < 10; i++) {
		HeadInsert(Head, testdatas[i]);
	}

	PrintList(Head);

	LNode * End = Head;
	while(End->next!=NULL){
		End = End->next;
	}

	for (int i = 0; i < 10; i++) {
		EndInsert(End, testdatas[i]);
		End = End->next;
	}
	PrintList(Head);

	return 0;
}*/