#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

char syotto(char merkkijono[], int size);
char pienitulostus(char merkkijono[], int size);
char suuritulostus(char merkkijono[], int size);



int main (void)
{
char merkkijono[SIZE];

syotto(merkkijono, SIZE);

pienitulostus(merkkijono, SIZE);

suuritulostus(merkkijono, SIZE);




    return(0);
}

char syotto(char merkkijono[], int size)
{


printf("Syota merkkijono, joka on enintaan 100 merkkia > ");
    fgets(merkkijono,size,stdin);


    return(0);
}
char pienitulostus(char merkkijono[], int size)
{
    for(int laskuri = 0; laskuri < strlen(merkkijono); laskuri++)
    {
        printf("%c", tolower(merkkijono[laskuri]));
         
    }
    return(0);
}
char suuritulostus(char merkkijono[], int size)
{
    for(int laskuri = 0; laskuri < strlen(merkkijono); laskuri++)
    {
        printf("%c", toupper(merkkijono[laskuri]));
         
    }
    return(0);
}