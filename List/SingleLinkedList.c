#include "singlelinkedlist.h"
/*
List makeEmpty(List L){
    if(L!=NULL){
        deleteList(L);
    }
    L = malloc(sizeof(struct Node));
    if(L == NULL){
        printf("Out Of memory!\n")
    }
    L->next = NULL;
    return L;
}
void deleteList(List L){}
*/
List initList(){
    List L;
    L = malloc(sizeof(struct Node));
    L->data = 0;
    L->next = NULL;
    return L;
}
/*
    Insert data to the end of list.
*/
void insertToEnd(List L, ElementType e){
    Position p;
    p = (L->next == NULL)? L:L->next;
    while(p->next != NULL){
        p = p->next;
    }
    insert(L,p,e);
}

void insert(List l, Position p, ElementType e){
    Position tmpCell;
    tmpCell = malloc(sizeof(struct Node));
    tmpCell->data = e;
    tmpCell->next = p->next;
    p->next = tmpCell;
}

void print(List L){
    Position p;
    if(L->next == NULL){
        printf("List is empty.\n");
        return;
    }
    p = L->next;
    printf("LinkedList as: ");
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}
