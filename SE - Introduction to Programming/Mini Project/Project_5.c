#include <stdio.h>

void main(){
    
    int min[7];
    int i;
    int choice;
    char confirm;
    FILE *file;

    do
    {
        printf("Music Listening Logger\n");
        printf("1) Log new listening minutes\n2) View Weekly Summery\n3) Reset Weekly Data\n4) Exit the app.\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);

        if(choice == 1){
            file = fopen("music_log.txt", "w");
            if(file == NULL){
                printf("Error opening file.\n");
            }

            else{
                for(i=0;i<7;i++){
                    printf("Enter the new minutes on day : %d = ", i+1);
                    scanf("%d", &min[i]);
                    fprintf(file, "%d\n", min[i]);
                }
                fclose(file);
                printf("Listening data saved successfully.\n");
            }
        }

        else if(choice == 2){
            int total = 0;
            int highest = 0;
            float average;

            file = fopen("music_log.txt", "r");

            if(file == NULL){
                printf("there is no any music found!\n");
            }

            else{

                for(i=0;i<7;i++){
                    fscanf(file, "%d", &min[i]);
                    total = total + min[i];

                    if(min[i] > highest){
                        highest = min[i];
                    }
                }

                fclose(file);    

                average = total /7;
                printf("Weekly Report\n");
                printf("Total music listening : %d minutes\n", total);
                printf("Highest music listening : %d minutes\n", highest);
                printf("Average music listening : %.2f minutes\n", average);
            }
        }

        else if(choice == 3){
            printf("Are you sure you want to reset all weekly data? (Y/N): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y'){
                for (i = 0; i < 7; i++){
                    min[i] = 0;
                }

                file = fopen("music_log.txt", "w");

                if (file == NULL){
                    printf("Error clearing file!\n");
                }
                else{
                    fclose(file);
                    printf("Weekly data has been reset successfully!\n");
                }
            }
            else{
                printf("Reset cancelled. Your data is safe.\n");
            }
        }

        else if(choice == 4){
            printf("Thanks for music listening app.\n");
        }

        else{
            printf("Invalid number ! Choose correctly.");
        }
    }while(choice !=4);
}