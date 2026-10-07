#include<stdio.h>

void incrementFollowers(int *followers, int n){
    int i;
    for(i=0;i<n;i++)
    {
        *(followers+i)=*(followers+i) + 100;
    }
    
}

void main(){

    int instagramfollowers[5]={546,563,478,450,600};

    int i;

    incrementFollowers(instagramfollowers,5);

    for(i=0;i<5;i++)
    {
        printf("Friend %d with %d followers\n",i+1,instagramfollowers[i]);
    }
    
}