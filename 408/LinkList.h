#pragma once

#include <iostream>

using ElemType = int;

using namespace std;

struct LNode {
	ElemType data;
	LNode* next = NULL;
};

void InitLinkList(LNode*& Head);
void HeadInsert(LNode* Head, ElemType e);
void PrintList(LNode* Head);
void EndInsert(LNode* End, ElemType e);
void DelList(LNode*& Head);