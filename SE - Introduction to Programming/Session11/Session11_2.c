#include<stdio.h>

void swapPlaylistCounts(int *a, int *b){

    int temp=*a;
    *a=*b;
    *b=temp;
}

void main(){

    int a=60;
    int b=30;

    printf("Before Swap Function use value of: \na=%d \nb=%d\n",a,b);

    swapPlaylistCounts(&a,&b);

    printf("After Swap Function use value of: \na=%d \nb=%d",a,b);

}