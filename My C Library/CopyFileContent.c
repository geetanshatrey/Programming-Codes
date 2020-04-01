#include "lib_FileFunctions.h"
#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

//int findFileSize(int f1){
//    if(f1>0){
//        FILE* fp = fdopen(f1, "w");
//        fseek(fp,0, SEEK_END);
//        int res = ftell(fp);
//        fseek(fp,0,SEEK_SET);
//        return res;
//    }
//    else
//        return -1;
//}
 int main(){
    int f1,f2;
    f1=fileOpen("ExistingFile.txt","r");
    //int n=findFileSize(f1);
    char* buf = (char*) malloc(10);
    f2=fileOpen("NewFile.txt","w");
    if(f1>0 && f2>0){
        buf=fileRead(f1,buf,10);
        fileWrite(f2,buf,10);
    }
     fileClose(f1);
     fileClose(f2);
}
