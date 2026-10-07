#include<stdio.h>
void main(){
    int guess;

    do
    {
        printf("Guess The Number:\n");
        printf("1)Tum hi ho \n2)Bairan \n3)khat \n");
        printf("Enter the Number");
        scanf("%d",&guess);

        if (guess==2)
        {
            printf("Correct the guess");
        }
        else{
            printf("Invalid guess try again");
        }
        
    } while(guess!=2);
    
}