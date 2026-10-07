#include<stdio.h>
void main()
{
    printf("1.MI\n2.CSK\n3.KKR\n4.GT\n");

    int num;

    printf("Select the team:");
    scanf("%d",&num);

    if (num==1)
    {
        printf("GO GO MUMBAI");
    }
    else if (num==2)
    {
        printf("Witshelphodu");
    }
    else if (num==3)
    {
        printf("Ami KKR");
    }
    else if (num==4)
    {
        printf("AAVADE!!");
    }
    else
    {
        printf("Team not found");
    }
    
    
}