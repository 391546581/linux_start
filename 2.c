#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
#include<string.h>
#include<unistd.h>
#include <process.h>

void GetMemory(char *p){
    p= (char *) malloc(100);
}
int main(int argc, char const *argv[])
{
    char *str = NULL;
    system("pause");
    GetMemory(str);
    strcpy(str,"Thunder");
    strcat(str+2,"Downloader");
    printf(str);
usleep(10000);

    return 0;
}