#include<stdio.h>
#include<string.h>

void main(){

    char name[50];
    char username[6];
    char firstfive[6];

    printf("Enter User Full name:");
    scanf("%s",name);
    gets(username);

    if (strlen(name)<5)
    {
        strcpy(username,name);
    }
    else{
        firstfive[0] = name[0];
        firstfive[1] = name[1];
        firstfive[2] = name[2];
        firstfive[3] = name[3];
        firstfive[4] = name[4];
        firstfive[5] = '\0';

        strcpy(username,firstfive);
    }

    printf("New User name is %s",username);

}