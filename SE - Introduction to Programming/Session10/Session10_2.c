#include<stdio.h>
#include<string.h>

void main()
{
    char user1[]="afzal";
    char user2[]="afzal";

    int a=strcmp(user1,user2);

    printf("Compare Two String :%d",a);
}