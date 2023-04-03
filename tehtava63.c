#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    const char * FILE_NAME = {"teksti.txt"};
    FILE * file;
    int charCount = 0;
    int lineCount = 0;

    if((file = fopen(FILE_NAME,"r")) == NULL)
    {
        printf("Ei toimi");
        return EXIT_FAILURE;
    }
    char edellinen = '\0';
    char nykyinen = '\0';

    do{
        edellinen = nykyinen;
        nykyinen = fgetc(file);
        if(nykyinen == '\n')
        {
            if(edellinen != '\n')
            {
                lineCount ++;
            }
        }
        else if(nykyinen != EOF)
        {
            charCount++;
        }
        else if(nykyinen == EOF && edellinen != '\n')
        {
            lineCount++;
        }
    }while(!feof(file));
        fclose(file);

        printf("Rivit: %d\n",lineCount);
        printf("Merkit: %d\n",charCount);
        return (0);
}
