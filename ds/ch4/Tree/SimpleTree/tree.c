#include "tree.h"

/*
tree* insert(int data, tree *t){
    if (t == NULL){

        node n = malloc(sizeof(tree));

    }
}
*/


void read_from_file(char *path){

    FILE *fp;
    char ch;

    if((fp = fopen(path, "r")) == NULL)
        return;

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
}

/**
 * Build a tree from data in a list which
 * is storaed in a text file.
 */

void build_tree(char *l, Tree *t){

}
