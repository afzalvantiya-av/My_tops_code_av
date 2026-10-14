
#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void weeklyReport(struct StudyLog logs[], int n)
{
    int i, day;
    float total, average;

    printf("\n===== Weekly Study Report =====\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        for (day = 0; day < 7; day++)
        {
            total += logs[i].hours[day];
        }

        average = total / 7.0f;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Total hours: %.2f\n", total);
        printf("Daily average: %.2f\n", average);

        printf("Daily progress chart:\n");

        for (day = 0; day < 7; day++)
        {
            int j;

            printf("Day %d: ", day + 1);

            for (j = 0; j < (int)logs[i].hours[day]; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}

int main(){
    struct StudyLog logs[3] = {
        {"C Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Mathematics", {0, 0, 0, 0, 0, 0, 0}},
        {"Web Development", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice, i, day;
    float hours;
    FILE *file;

    do
    {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter day number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day number!\n");
                continue;
            }

            for (i = 0; i < 3; i++)
            {
                do
                {
                    printf("Hours studied for %s: ",
                           logs[i].subject);
                    scanf("%f", &hours);

                    if (hours < 0 || hours > 24)
                    {
                        printf("Enter hours between 0 and 24.\n");
                    }

                } while (hours < 0 || hours > 24);

                logs[i].hours[day - 1] = hours;
            }

            printf("Study hours recorded successfully!\n");
        }
        else if (choice == 2)
        {
            weeklyReport(logs, 3);
        }
        else if (choice == 3)
        {
            file = fopen("productivity_log.txt", "w");

            if (file == NULL)
            {
                printf("Error saving file!\n");
                return 1;
            }

            for (i = 0; i < 3; i++)
            {
                fprintf(file, "%s", logs[i].subject);

                for (day = 0; day < 7; day++)
                {
                    fprintf(file, ",%.2f", logs[i].hours[day]);
                }

                fprintf(file, "\n");
            }

            fclose(file);

            printf("Data saved to productivity_log.txt\n");
            printf("Goodbye!\n");
        }
        else{

            printf("Invalid choice!\n");
        }

    }while(choice!=3);

    return 0;
}
