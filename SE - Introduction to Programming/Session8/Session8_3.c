#include<stdio.h>

    void increaseFollowersByValue(int followers){
        followers = followers+1000;
    }

    void increaseFollowersByReference(int *followers){
        *followers = *followers+1000;
    }


void main(){

    int followers=856;

    printf("Original followers %d\n",followers);

    increaseFollowersByValue(followers);
    printf("Increse followers using Call ByValue followers:%d\n",followers);

    increaseFollowersByReference(&followers);
    printf("Increse followers using Call ByReference followers:%d\n",followers);
}