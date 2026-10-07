#include <stdio.h>
#include <stdlib.h>

void main()
{

    FILE *fptr;

    char data[50];
    fptr = fopen("file.txt", "r");

    if (fptr == NULL)
    {
        printf("file.txt file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");

        while (fgets(data, 50, fptr) != NULL)
        {
            printf("%s", data);
        }
        
        fclose(fptr);
    }

}
