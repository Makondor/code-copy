#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

char *alloc(int);
void afree(char*);

#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
void strcopy(char *s, char *t);

int strlength(char*);

void read_lines(char*, char **);

#define MAXLINES 5000
char * lineptr[MAXLINES];


#endif // COMMON_H_INCLUDED
