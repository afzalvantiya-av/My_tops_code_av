#include<stdio.h>

void main(){

    int likes=1000;
    int *ptrlikes=&likes;

    printf("Address of Pointer:%u\n",ptrlikes);
    printf("Value of Pointer:%d\n",likes);



}