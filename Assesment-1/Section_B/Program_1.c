
#include <stdio.h>

void main() {

    float percentage;

    printf("Enter percentage:");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100){
    printf("Invalid Input Percentage must be between 0 and 100.\n");
    }
    else{
        if (percentage >= 90){
         printf("Grade: A - Excellent work!\n");
        } else if (percentage >= 75){
            printf("Grade: B - Good work! Keep pushing.\n");
        } else if (percentage >= 60){
            printf("Grade: C - Good effort! Keep learning.\n");
        } else if (percentage >= 45){
            printf("Grade: D - Keep practising.\n");
        } else if(percentage<45){
            printf("Grade: F - Do not give up!\n");
        }
    }
}