#include<stdio.h>
void main(){

    int i,j,s,num;

    printf("Enter the Number Of Row:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        for(s=num-1;s>=i;s--){
            printf(" ");
        }
            for(j=1;j<=(2*i)-1;j++){
            printf("*");}
        printf("\n");
    }
}