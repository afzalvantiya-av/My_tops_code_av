#include<stdio.h>
void main(){

    int age,totalordervalue;

    printf("Enter the Age:");
    scanf("%d",&age);

    printf("Enter the Total Order Value:");
    scanf("%d",&totalordervalue);

    if(age>=18 && totalordervalue>=500){
        printf("True");
    }
    else{
        printf("False");
    }
}