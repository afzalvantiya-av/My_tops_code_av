#include<stdio.h>
void main(){

    int age;

    printf("Enter the Age:");
    scanf("%d",&age);

    if (age>=25)
    {
        printf("Eligible for Driving License\n");
        printf("Eligible for Credit Card\n");
        printf("Eligible for Car Rental\n");
    }
    else if(age>=21)
    {
        printf("Eligible for Driving License\n");
        printf("Eligible for Credit Card\n");
    }
    else if(age>=18)
    {
        printf("Eligible for Driving License\n");
    }
    else{
        printf("You are not eligible");
    }
    
    
}