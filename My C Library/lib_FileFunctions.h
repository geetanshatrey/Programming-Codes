#include<stdio.h>
FILE* fileOpen(const char*, const char);
void fileClose(FILE*);
char* fileRead(FILE*,const char*, size_t);
void fileWrite(FILE*,const char*, size_t);
