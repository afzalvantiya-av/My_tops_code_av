#include<stdio.h>

int main(){

    int index,j;
    float sum=0,avg;
    float studyhours[7];

    for (index=0;index<7;index++){
        printf("Enter the study Hours day %d (0-24):",index+1);
        scanf("%f",&studyhours[index]);
        
        if (studyhours[index]<0 || studyhours[index]>24){
            printf("Invalid input pls start again");
            return 1;
        }
        else{
            sum+=studyhours[index];
        }
      
    }
    
    printf("\n\nSum of weekly total:%f\n",sum);

    avg=sum/7;

    printf("The avg hour you study :%f\n",avg);

    float highest = studyhours[0];

    for(index=0;index<7;index++){
        if(studyhours[index]>highest){
            highest=studyhours[index];
        }
        else{

        }
    }
    printf("highest hour study :%f\n",highest);

    for(index=0;index<7;index++){
        printf("Day %d: ",index+1);

        for(j=0;j<(int)studyhours[index];j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}