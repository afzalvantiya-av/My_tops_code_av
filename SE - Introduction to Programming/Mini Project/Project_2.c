#include<stdio.h>

void main(){

int choice;

    while(1)
    {
    int min[7];
    int index;

    printf("1.Log New Listening Minutes\n2.View Weekly Summary\n3.Exit\n\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);

    if(choice==1){

        for(index=0;index<7;index++){

        printf("Enter the Number of minutes Listened on Day%d:",index+1);
        scanf("%d",&min[index]);
        }
    }
    else if(choice==2){

        for(index=0;index<7;index++){

        printf("Day %d minutes of Music Listen:%d Minutes\n",index+1,min[index]);
        }
    }
    else if(choice==3){
        printf("Exit");
        break;
    }
    else{
        printf("Invalid Input\n");
    }

    }

}