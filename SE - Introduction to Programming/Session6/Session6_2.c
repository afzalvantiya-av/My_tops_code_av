#include<stdio.h>
void main(){
    
    int choice;
    char newteam[10];

    while (1)
    {
        printf("1) View your favorite 3 IPL teams \n2) Add a new team \n3) Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        
        if(choice==1){
            printf("Favorite team :\n1)CSK \n2)RCB \n3)MI\n");
        }
        else if(choice==2)
        {
            printf("Add New Team Name:\n");
            scanf("%s",&newteam);
            printf("Team added successfully!\n");
        }
        else if(choice==3)
        {
            printf("Exit");
            break;
        }
        else{
            printf("Invalid Input\n");
        }
        

    }
    
}