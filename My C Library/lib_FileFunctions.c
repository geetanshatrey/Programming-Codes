#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

FILE* fileOpen(char* pathOfFile,char* modeOfFile){
    int fd;
    printf("Hello");
    if(*modeOfFile =='r')
        fd= open(pathOfFile,O_RDONLY | O_CREAT);
    else if(*modeOfFile=='w')
        fd= open(pathOfFile,O_WRONLY | O_CREAT);  
    else
        fd= open(pathOfFile,O_RDWR | O_CREAT);
    printf("%d",fd);
    if(fd!=-1)
        printf("\nFile Opened with File Descripter : %d",fd);
    else
        printf("\nFailed to Open !");
    //return fdopen(fd,modeOfFile);
}

void fileClose(FILE* filePointer){
    int fd= fileno(filePointer);
    int s=close(fd);
    if(s==0)
        printf("\nFile Closed !");
    else
        printf("\nCould not close !");
}

char* fileRead(FILE* filePointer,char* bufferToRead, size_t sizeToRead){
    int fd= fileno(filePointer);
    size_t size= read(fd,bufferToRead,sizeToRead);
    printf("\nSize of File Read: %zu",size);
    printf("\n Read : %s",bufferToRead);
    return bufferToRead;
}

void fileWrite(FILE* filePointer,char* bufferToWrite, size_t sizeToWrite){
    int fd= fileno(filePointer);
    size_t size= write(fd,bufferToWrite,sizeToWrite);
    printf("\nSize of File Wrote: %zu",size);
}
