#include "common.h"
#include <stdio.h>
#define MAX_LENGTH 1024
void read_lines(char * file_path, char *lineptr[])
{
    FILE *fp = NULL;
    char buff[MAX_LENGTH];
    char *p, line[MAX_LENGTH];



    fp = fopen(file_path, "r");
    while (fgets(buff, MAX_LENGTH,fp) != NULL){
        printf("%s", buff);
    }
}
