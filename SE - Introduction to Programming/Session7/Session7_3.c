#include<stdio.h>

void main(){

    int i,j,s;
    for(i=1;i<=6;i++){
        for(s=5;s>=i;s--){
            printf(" ");
        }
            for(j=1;j<=(2*i)-1;j++){
            printf("*");}
        printf("\n");
    }
}