#include "tree.h"

int main(){

    int insertData[] = {6, 2, 8, 4, 1, 3};

    SearchTree T = NULL;

    T = makeEmpty(T);
    int i;
    for(i=0;i<6;i++){
        T = insert(insertData[i],T);
    }

    //Testing taverse and findMin
    midTravers(T);
    printf("\n");
    SearchTree t = findMin(T);
    printf("Minist data: %d\n", t->element);

    printf("\n");
    printf("========== Graphs ==========\n");
    printf("digraph{\n");
    graphTravers(T);
    printf("}\n");
    printf("========== Graphs end ==========\n");

    // Testing delete
    int forDelete = insertData[3];
    printf("Deleting data: %d\n", forDelete);
    tdelete(forDelete, T);
    midTravers(T);
    printf("\n");
    printf("========== Graphs ==========\n");
    printf("digraph{\n");
    graphTravers(T);
    printf("}\n");
    printf("========== Graphs end ==========\n");
    return 0;
}
