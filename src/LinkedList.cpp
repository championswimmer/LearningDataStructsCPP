/*
 * LinkedList.cpp
 *
 *  Created on: 01-Sep-2014
 *      Author: championswimmer
 */

#include "LinkedList.hpp"
#include <stdlib.h>
#include <stdio.h>

struct Node {
	int Val;
	Ptr2Node Next;
};

int isEmpty (List L) {
	return L->Val == NULL;
}

int isLast (Pos P) {
	return P->Next == NULL;
}

List createList (int X) {
	Pos T = (Node*)malloc(sizeof(struct Node));
	T->Val = X;
	T->Next = NULL;
	return T;
}

void printList (List L) {
	if (isEmpty(L)) return;
	Pos P = L;
	while (P != NULL) {
		printf("%d ", P->Val);
		P = P->Next;
	}
}

Pos findPos (int X, List L) {
	if (isEmpty(L)) return 0;
	Pos P = L;
		while (P != NULL) {
			if (P->Val == X) return P;
			P = P->Next;
		}
}

void insertAfter (int X, Pos P) {
	Pos T = (Node*)malloc(sizeof(struct Node));
	T->Val = X;
	if (isLast(P)) {
		T->Next = NULL;
	} else {
		T->Next = P->Next;
	}
	P->Next = T;
}

void insertBefore (int X, Pos &P) {
	Pos T = (Node*)malloc(sizeof(struct Node));
		T->Val = X;
		T->Next = P;
		P = T;

}
