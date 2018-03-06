#include "singlelinkedlist.h"

/*
    Methods list:
    BASIC
    1. Initialize a linkedlist : initList
    2. Insert to the end of linkedlist to make a complete list : insertToEnd
    3. Print the linkedlist : print
    4. Find the previous position of the location : findPrevious
    5. Delete all elements of the linkedlist : makeEmpty

    CRUD (not U, because U can be done by D and C)
    1. Insert to the specific position of the linkedlist : insert
    2. Search an element : search
    3. Delete an element : delete

    makeEmpty
    isEmpty
    isLast
    find
    delete
    findPrevious
    insert
    deleteList
    header
    first
    advance
    retrieve

*/

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

/*
    Init an empty list with a head node.
*/

/*
    Find previous node of the specific location.
*/
Position findPreviois(List L, ElementType E){
}

/*
    Delete the first element we found in the list.
*/
//ElementType delete(List L, ElementType E){
//}

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

/*
    Insert an element to the specific position.
*/
void insert(List l, Position p, ElementType e){
    Position tmpCell;
    tmpCell = malloc(sizeof(struct Node));
    tmpCell->data = e;
    tmpCell->next = p->next;
    p->next = tmpCell;
}

/*
    Print elements one by one.
    If the list is empty, we'll note that.
*/
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
