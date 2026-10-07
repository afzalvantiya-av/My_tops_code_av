#include<stdio.h>
void main(){

    int like,comments,shares;

    printf("Enter the Likes:");
    scanf("%d",&like);

    printf("Enter the Comments:");
    scanf("%d",&comments);

    printf("Enter the Shares:");
    scanf("%d",&shares);

    if (like>=1000 || comments>200 && shares>=50)
    {
        printf("Post is Trending");
    }
    else{
        printf("Post is Not Trending");
    }
    
}