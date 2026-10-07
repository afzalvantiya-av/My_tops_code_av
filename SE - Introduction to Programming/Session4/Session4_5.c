#include<stdio.h>
void main(){

    int followercount;
    followercount =50;

    //before pre increment value is 50
    printf("Before Pre Increment Value is:%d\n",followercount);

    ++followercount;      //Pre-increment: increments first, then uses the value
    printf(" pre Increment Value is:%d\n",followercount);

    //after pre increment and also before post increment valu is 51
    printf("After Pre Increment Value is:%d\n",followercount);

    followercount=50;

    printf("before Post Increment value is:%d\n",followercount);

    
    //after post increment value is 51
    printf(" Post Increment Value is:%d\n",followercount);
    followercount++;    //Post-increment: uses the value first, then increments
    printf("After Post Increment Value is:%d\n",followercount);

}