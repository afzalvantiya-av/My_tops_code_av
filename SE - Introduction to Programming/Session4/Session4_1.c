#include<stdio.h>

void main(){

    int itemprice,quantity;

    printf("Enter Item price:");
    scanf("%d",&itemprice);

    printf("Enter ItemQuantity:");
    scanf("%d",&quantity);

    int total;
    total=itemprice*quantity;
    printf("Total Bill amount:%d\n",total);

}