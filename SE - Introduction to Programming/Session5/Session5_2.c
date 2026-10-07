#include<stdio.h>
void main(){

    int a;
    printf("1.breakfast\n2.lunch\n3.dinner\n4.snack\n");
    
    printf("Select the number:");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Bread and Omelet");
        break;

    case 2:
        printf("Biryani");
        break;

    case 3:
        printf("panir bhurji");
        break;

    case 4:
        printf("Bhajiya");
        break;
    
    default:
        printf("Enter valid number");
        break;
    }
}