#include "lib_FileFunctions.h"
#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int findFileSize(FILE* f1){
    if(f1!=NULL){
        fseek(f1,0, SEEK_END); 
        int res = ftell(f1);  
        fseek(f1,0,SEEK_SET);
        return res;
    }
    else 
        return -1;
}
 int main(){
    FILE *f1,*f2;
    f1=fileOpen("ExistingFile.txt",'r');
    int n=findFileSize(f1);
    char* buf = (char*) malloc(n);
    f2=fileOpen("NewFile.txt",'w');
    if(f1!=NULL && f2!=NULL){
        buf=fileRead(f1,buf,n);
        fileWrite(f2,buf,n);
    }
}
