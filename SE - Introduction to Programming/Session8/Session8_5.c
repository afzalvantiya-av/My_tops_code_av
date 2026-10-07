#include<stdio.h>
#include<ctype.h>

    void firstlatter(char text[]){
        if(text[0]!='\0'){
            text[0] = toupper(text[0]);
        }
    }



void main(){

    char productname[20]="apple";
    char username[20]="afzal vantiya";

    firstlatter(productname);
    printf("Productname :%s\n",productname);

    firstlatter(username);
    printf("Username :%s\n",username);
}