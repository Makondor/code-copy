#include "common.h"
struct Node{
    ElementType data;
    struct Node *next;
};

typedef struct Node *ptrToNode;
typedef ptrToNode List;
typedef ptrToNode Position;

List initList();
void print(List);
void makeEmpty(List);
void insert(List, Position, ElementType);
void insertToEnd(List, ElementType);

