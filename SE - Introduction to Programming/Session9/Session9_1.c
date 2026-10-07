#include<stdio.h>

void main(){
    int dailysteps[]={2366,5352,5454,6546,5679,7757,767};
    int index;

    for (index=0;index<=6;index++)
    {
        printf("day[%d]=%d\n",index+1,dailysteps[index]);
    }
    
}