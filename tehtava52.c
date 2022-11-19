#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 1000

char syotto(char merkkijono1[], int size);
char poistaValilyonnit(char merkkijono1[], int size);




int main (void)
{
char merkkijono1[SIZE];
char merkkijono2[SIZE];



    syotto(merkkijono1, SIZE);

        poistaValilyonnit(merkkijono1, SIZE);

            return(0);
}




char syotto(char merkkijono1[], int size)
{
char merkkijono2[SIZE];

printf("Syota tekstia > ");

    for(int n = 0; n < 3; n++)
    {
        if(merkkijono1[strlen(merkkijono1) -1] == '\n')
        {
            merkkijono1[strlen(merkkijono1) -1] = '\0';
        }
            if(merkkijono2[strlen(merkkijono2) -1] == '\n')
            {
                merkkijono2[strlen(merkkijono2) -1] = '\0';
            }

                if(n == 0)
                {
                fgets(merkkijono1,size,stdin);
                }

                    if(n == 1)
                    { 
                        fgets(merkkijono2,size,stdin);

                            strcat(merkkijono1, merkkijono2 );
                    }
    }
return(0);
}



char poistaValilyonnit(char merkkijono1[], int size)
{
int laskuri = 0;
    for(int m = 0; m < strlen(merkkijono1); m ++)
    {
        if(merkkijono1[m] != ' ')
        {
            merkkijono1[laskuri] = merkkijono1[m];
             laskuri++;
        }
    }
printf("%s",merkkijono1);
        return(0);
}