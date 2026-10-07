#include<stdio.h>

void main(){
    int orderamount[]={366,532,454,654,579,757,807};
    int index;
    float avg;
    int sum=0;

    for (index=0;index<=6;index++)
    {
        sum=sum+orderamount[index];
    }

    printf("Sum of Array=%d\n",sum);

    avg=(float)sum/(float)index;

    printf("Average Ordervalue:%f\n",avg);
    
}