#include<stdio.h>

void main(){

    int Playlistrating[3][5]={{4,3,2,5,2},{3,5,4,2,5},{5,3,4,2,5}};

    int index;

    for(index=0;index<=4;index++){
        printf("playlist 2:%d\n",Playlistrating[1][index]);
    }
}