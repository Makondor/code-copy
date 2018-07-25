#include <stdio.h>
#include <stdlib.h>

#ifndef _Tree_H
struct TreeNode;
typedef int ElementType;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree makeEmpty(SearchTree T);
SearchTree insert(ElementType x, SearchTree T);

SearchTree midTravers(SearchTree T);

#endif


struct TreeNode{
    ElementType element;
    SearchTree left;
    SearchTree right;
};
