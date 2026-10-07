#include<stdio.h>

void main(){

    char items[20] = {"Burger,Pizza,Fries"};

    int prices[3]= {120, 250, 90};

    int total=0;
    int i;

    for(i=0;i<3;i++)
    {
        total+=prices[i];
    }
    
    printf("Total price is: %d",total);
    
}