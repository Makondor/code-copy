#include "tree.h"

SearchTree makeEmpty(SearchTree T){
    if(T != NULL){
        makeEmpty(T->left);
        makeEmpty(T->right);
        free(T);
    }
    return NULL;

}

SearchTree insert(ElementType x, SearchTree T){

    if(T==NULL){
        T = malloc(sizeof(struct TreeNode));
        if(T == NULL)
            printf("Malloc space failed.\n");
        else{
            T->element = x;
            T->left = T->right = NULL;
        }
    }else if(T->element > x){
        T->left = insert(x, T->left);
    }else if(T->element < x){
        T->right = insert(x, T->right);
    }
}

SearchTree midTravers(SearchTree T){

    if(T == NULL){
        return NULL;
    }else{
        T->left = midTravers(T->left);
        printf("%d ", T->element);
        T->right = midTravers(T->right);
    }
}
