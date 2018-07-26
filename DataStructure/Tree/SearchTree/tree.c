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
    }else if(x < T->element){
        T->left = insert(x, T->left);
    }else if(x > T->element){
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

SearchTree graphTravers(SearchTree T){

    if(T == NULL){
        return NULL;
    }else{
        T->left = graphTravers(T->left);
        // Generate graph.
        if(T->left != NULL)
            printf("%d->%d\n", T->element, T->left->element);
        if(T->right != NULL)
            printf("%d->%d\n", T->element, T->right->element);
        //printf("%d ", T->element);
        T->right = graphTravers(T->right);
    }
}


Position findMin(SearchTree T){
    if(T == NULL)
        return NULL;
    else
        if(T->left == NULL)
            return T;
        else
            return findMin(T->left);
}

SearchTree tdelete(ElementType x, SearchTree T){

    Position tmpCell;

    if(T == NULL)
        return T;

    else if(x < T->element){
        T->left = tdelete(x,T->left);
    }
    else if(x > T->element){
        T->right = tdelete(x,T->right);
    }
    else
        if(T->left && T->right){
            tmpCell = findMin(T->right);
            printf("Find minist element of the right child: %d\n", tmpCell->element);
            T->element = tmpCell->element;
            T->right = tdelete(T->element, T->right);
        }else{
            tmpCell = T;
            if(T->left == NULL)
                T = T->right;
            else if(T->right == NULL)
                T = T->left;
            free(tmpCell);
        }
    return T;
}
