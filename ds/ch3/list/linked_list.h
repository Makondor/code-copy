#include <stdio.h>
#include <stdlib.h>

#define ElementType int

struct Node{
    ElementType data;
    struct Node *next;
};

typedef struct Node *ptrToNode;
typedef ptrToNode List;
typedef ptrToNode Position;

List initList();
void printList(List);
void makeEmpty(List);
void insert(List, Position, ElementType);
void append(List, ElementType);
/*
void delete(List,Position);
*/
