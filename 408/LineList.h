#pragma once

#include <iostream>
#define InitSize 50

using ElemType = int;

using namespace std;

struct SqList {
	ElemType datas[InitSize];
	int length = 0;
};

int Length(SqList L);
int LocateElem(SqList& L, ElemType t);
ElemType GetElem(SqList& L, int idx);
void InsertElem(SqList& L, ElemType t, int idx);
void DelElem(SqList& L, ElemType t);
bool Empty(SqList& L);
void PrintList(SqList& L);