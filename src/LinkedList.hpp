/*
 * LinkedList.hpp
 *
 *  Created on: 01-Sep-2014
 *      Author: championswimmer
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

struct Node;
typedef struct Node *Ptr2Node;
typedef Ptr2Node List;
typedef Ptr2Node Pos;

int isEmpty (List L);
int isLast (Pos P);
List createList (int X);
void printList (List L);
void insertAfter (int X, Pos P);
void insertBefore (int X, Pos &P);
Pos findPos (int X, List L);
Pos findPrevPos (int X, List L);
void deleteItem(int X, List &L);

#endif /* LINKEDLIST_HPP_ */
