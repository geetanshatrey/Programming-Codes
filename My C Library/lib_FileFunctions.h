#include<stdio.h>
int fileOpen(const char*,const char*);
void fileClose(int);
char* fileRead(int,char*, size_t);
void fileWrite(int,char*, size_t);
