#include<stdio.h>
#include<string.h>

    char task[5][50]={"work", "play", "eat", "gym", "sleep"};

    void markTaskDone(int index){
        strcpy(task[index],"Done");
    }

void main(){

    int index;

    for(index=0;index<5;index++)
    {
        printf("Task %d :%s \n",index+1,task[index]);
    }
    
    markTaskDone(2);
    printf("\nUpdated List of Task\n");

    for(index=0;index<5;index++)
    {
        printf("Task %d :%s \n",index+1,task[index]);
    }
}