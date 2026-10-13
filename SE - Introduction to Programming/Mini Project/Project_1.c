#include<stdio.h>

void main(){

    int min[7];
    int index;

    printf("Music Listening Logger:\n\n\n");

    for(index=0;index<7;index++){

        printf("Enter the Number of minutes Listened on Day%d:",index+1);
        scanf("%d",&min[index]);
    }
    for(index=0;index<7;index++){

        printf("Day %d minutes of Music Listen:%d Minutes\n",index+1,min[index]);
    } 
}