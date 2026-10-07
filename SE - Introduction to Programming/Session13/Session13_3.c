 #include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;

    char song1[40];
    char song2[40];

    fptr = fopen("file.txt", "a");

    if (fptr == NULL)
    {
        printf("file.txt file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");

        printf("Enter The song 1:");
        fgets(song1,40,stdin);
        fprintf(fptr,"%s",song1);
        
        printf("Enter The Song 2:");
        fgets(song2,40,stdin);
        fprintf(fptr,"%s",song2);

        fclose(fptr);

        printf("Two songs successfully added to file.txt\n");
        printf("The file is now closed.");
    }
}