//============================================================================
// Name        : LearningDataStructsCPP.cpp
// Author      : Arnav Gupta
// Version     :
// Copyright   : Copyright (c) Under GPL v3
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.hpp"
using namespace std;

void LinkedListOps();

int main() {
	LinkedListOps();
	return 0;
}

void LinkedListOps() {
	List L = createList(10);
	insertAfter(20, L);
	insertAfter(30, L);
	insertBefore(50, L);
	printList(L);
	printf("\n%d %d", findPos(20,L), findPos(30,L));
	insertAfter(20, findPos(10, L));
	printf("\n");
	printList(L);
}
