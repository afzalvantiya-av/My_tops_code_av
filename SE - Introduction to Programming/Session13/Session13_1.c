#include <stdio.h>
#include <stdlib.h>

void main()
{

    FILE* fptr;
    
    char data[50] = "1.Arjit Singh \n2.A.R. Rehman \n3.Kishore Kumar";

    fptr = fopen("file.txt", "w");

    if (fptr == NULL)
        printf("The file is not opened.");
    else{
        printf("The file is now opened.\n");
        fputs(data, fptr);
        fputs("\n", fptr);
        fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
    }

}
