#include <stdio.h>


struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree* node;

void read_from_file(char*);
