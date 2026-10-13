#include<stdio.h>

void main(){

int choice,index;
int min[7];

FILE *file;

for(index=0;index<7;index++){
    min[index]=0;
}
    while(1)
    {

    printf("1.Log New Listening Minutes\n2.View Weekly Summary\n3.Exit\n\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);

    if(choice==1){

        file = fopen("music_log.txt","w");
        if (file==NULL)
        {
            printf("Error opening file.\n");
        }
        else{
            for(index=0;index<7;index++){

                printf("Enter the Number of minutes Listened on Day%d:",index+1);
                scanf("%d",&min[index]);
                fprintf(file,"Day:%d minutes:%d\n",index+1,min[index]);
            }
            fclose(file);
            printf("Listening data saved to music_log.txt\n");
        }
        
    }
    else if(choice==2){

        printf("View Weekly Summery\n");
        for(index=0;index<7;index++){

        printf("Day %d minutes of Music Listen:%d Minutes\n",index+1,min[index]);
        }
    }
    else if(choice==3){
        printf("Exit");
        break;
    }
    else{
        printf("Invalid Input\n");
    }

    }

}