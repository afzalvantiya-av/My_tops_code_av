#include <stdio.h>
#include<string.h>
#include <stdlib.h>

void main()
{

    FILE *fptr;

    char song[50];
    char same[50];
    int i;
    fptr = fopen("file.txt", "r");

    if (fptr == NULL)
    {
        printf("file.txt file failed to open.");
    }
    else
    {
        printf("The file is now opened.\n");

        while (fgets(song, 50, fptr) != NULL)
        {
            for(i=0;song[i]!='\0';i++){
                same[i]=song[i];
            }
            same[i]='\0';

            if(strstr(same,"love")!=NULL)
            {
                printf("%s",song);
            }
        }
        fclose(fptr);
    }

}
