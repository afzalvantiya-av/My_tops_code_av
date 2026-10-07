#include<stdio.h>

    struct Biography{
        char description[20];
        int age;
    };


    struct InstaProfile{
        char username[20];
        int  followers;
        struct Biography bio;
    };
    
void main(){

    struct InstaProfile user={"Afzal Vantiya",687,{"happy soul",25}};
    
    printf("User name is %s and %d Followers. \n\nBio is :\n%s \n%d Age",user.username,user.followers,user.bio.description,user.bio.age);

}