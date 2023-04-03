#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

int main(int argc, const char * argv[])
{
    char syote1[SIZE];
    char syote2[SIZE];
    FILE *t1, *t2;
    char juu;
    char jaa;


    printf("Syota tiedoston nimi> ");
    scanf("%s",syote1);

    printf("Syota tiedoston nimi> ");
    scanf("%s",syote2);

    t1 = fopen(syote1,"r");
    t2 = fopen(syote2,"r");

    while(juu != EOF && jaa != EOF)
    {
        juu = fgetc(t1);
        jaa = fgetc(t2);
    }
    
    if(juu == EOF && jaa == EOF)
    {
        printf("Tiedostot ovat sisällöltään identtiset.");
    }
    
    else
    {
        printf("Tiedostot eivät ole sisällöltään identtiset.");
    }

    

    fclose(t1);
    fclose(t2);


        return (0);
}
