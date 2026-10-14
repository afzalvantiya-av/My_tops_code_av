#include<stdio.h>

    struct Student{
        char name[50];
        int rollno;
        float marks;
        char grade;
    };

    void assignGrade(struct Student *s){
        if (s->marks>=75)
            s->grade = 'A';
        else if (s->marks>=60)
            s->grade = 'B';
        else if (s->marks>=50)
            s->grade = 'C';
        else if (s->marks>=35)
            s->grade = 'D';
        else
            s->grade = 'F';
    }

    void printTopper(struct Student students[],int n){
        int i,top=0;

        for(i=1;i<n;i++){
            if (students[i].marks > students[top].marks){
                top=i;
            }
        }

    printf("\nTopper: %s\n",students[top].name);
    printf("Marks: %.2f\n",students[top].marks);
}

int main(){

    struct Student students[3];
    int i;

    for (i=0;i<3;i++){
        printf("\nEnter student %d name: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d",&students[i].rollno);

        printf("Enter marks: ");
        scanf("%f",&students[i].marks);

        if(students[i].marks < 0 || students[i].marks > 100){
            printf("Invalid marks! Enter a value from 0 to 100.\n");
            return 1;
        }

        assignGrade(&students[i]);
    }

    printf("\nStudent Records:\n\n");

    printf("%-20s %-10s %-10s %-10s\n","Name","Roll No","Marks","Grade");

    for(i=0;i<3;i++){
        printf("%-20s %-10d %-10.2f %-10c\n",students[i].name,students[i].rollno,students[i].marks,students[i].grade);
    }

    printTopper(students, 3);

    return 0;
}