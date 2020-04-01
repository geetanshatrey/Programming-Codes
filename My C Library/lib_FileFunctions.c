#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>

int fileOpen(const char* pathOfFile,const char* modeOfFile[]){
    int fd;
    printf("Hello");
    if(strcmp(*modeOfFile,"r")==0){
        fd= open(pathOfFile,O_RDONLY | O_CREAT);
    }
    else if(strcmp(*modeOfFile,"w")==0){
        fd= open(pathOfFile,O_WRONLY | O_CREAT);
        printf("%d",fd);
    }
    else{
        fd= open(pathOfFile,O_RDWR | O_CREAT);
    }
    printf("%d",fd);
    return fd;
}

void fileClose(int fd){
    int s=close(fd);
    if(s==0)
        printf("\nFile Closed !");
    else
        printf("\nCould not close !");
}

char* fileRead(int fd,char* bufferToRead, size_t sizeToRead){
    size_t size= read(fd,bufferToRead,sizeToRead);
    printf("\nSize of File Read: %zu",size);
    printf("\n Read : %s",bufferToRead);
    return bufferToRead;
}

void fileWrite(int fd,char* bufferToWrite, size_t sizeToWrite){
    size_t size= write(fd,bufferToWrite,sizeToWrite);
    printf("\nSize of File Wrote: %zu",size);
}
