#include <stdio.h>

    struct Expense{

        char category[30];
        float amount;
    };

int main(){
    
    struct Expense expenses[10];
    int count = 0;
    int choice, i;
    float total;
    FILE *file;

    do
    {
        printf("\n===== Personal Expense Logger =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){

            if(count>=10){

                printf("Expense list is full!\n");
            }
            else{

                printf("Enter category (one word): ");
                scanf("%29s", expenses[count].category);

                printf("Enter amount: ");
                scanf("%f", &expenses[count].amount);

                if(expenses[count].amount<0){
                    printf("Amount cannot be negative!\n");
                }
                else{
                    count++;
                    printf("Expense added successfully!\n");
                }
            }
        }
        else if(choice==2){
            total =0;

            printf("\n===== All Expenses =====\n");

            for(i=0;i<count;i++){

                printf("%s: %.2f\n",expenses[i].category,expenses[i].amount);

                total = total + expenses[i].amount;
            }

            printf("Total expenses: %.2f\n", total);
        }
        else if(choice==3){

            file = fopen("expenses.txt", "w");

            if(file == NULL){
                printf("Error saving file!\n");
                return 1;
            }

            for(i=0;i<count;i++){
                fprintf(file,"%s,%.2f\n",expenses[i].category,expenses[i].amount);
            }

            fclose(file);

            printf("Expenses saved to expenses.txt\n");
            printf("Goodbye!\n");
        }
        else{
            printf("Invalid choice!\n");
        }

    }while(choice!=3);

    return 0;
}