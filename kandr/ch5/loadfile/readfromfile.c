#include <stdio.h>
#include <fcntl.h>

#define BUFFERSIZE 4

char *readfromfile(char *path){

    int fd;
    
    char *buffer[BUFFERSIZE];
    char c;
    fd = open(path,O_RDONLY);

    while((c = read(fd, buffer, BUFFERSIZE)) != 0){
        printf("%s",buffer);
        printf("------");
    }

    return *buffer;
}


void main(){

    char *s = readfromfile("./test");
    printf("%s", *s);

    //char *p = s;


}
