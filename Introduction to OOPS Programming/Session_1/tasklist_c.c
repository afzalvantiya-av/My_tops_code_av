#include<stdio.h>

void main(){

    char task[5][50]={"work", "play", "eat", "gym", "sleep"};

    int index;

    for(index=0;index<5;index++)
    {
        printf("Task %d :%s \n",index+1,task[index]);
    }
    

}