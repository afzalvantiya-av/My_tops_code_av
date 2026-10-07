#include<stdio.h>

void main(){

    int zomatoorders[5]={657,567,579,389,568};

    int *pz=zomatoorders;
    int index;
    for (index=0;index<5;index++)
    {
        printf("index of %d address of %u = value%d\n",index,pz,zomatoorders[index]);
    }
    
}