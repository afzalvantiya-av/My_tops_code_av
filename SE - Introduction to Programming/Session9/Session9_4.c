#include<stdio.h>

void main(){

    int cricketscore[3][2]={{120,150},{100,99},{49,49}};

    int index;

    for(index=0;index<=2;index++){
    if (cricketscore[index][0]> cricketscore[index][1])
    {
        printf("Match:%d highest Score%d\n",index+1,cricketscore[index][0]);
    }
    else{
        printf("Match:%d highest Score%d\n",index+1,cricketscore[index][1]);
    }
    
}
}