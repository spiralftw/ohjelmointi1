#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

char syotto(char merkkijono1[], int size);
char tulostus(char merkkijono1[], int size);




int main (void)
{
char merkkijono1[SIZE];


for(int laskuri = 0; laskuri < 5; laskuri++)
{
    syotto(merkkijono1, SIZE);

    tulostus(merkkijono1, SIZE);
}





    return(0);
}

char syotto(char merkkijono1[], int size)
{


printf("Syota merkkijono, joka on enintaan 100 merkkia > ");
    fgets(merkkijono1,size,stdin);


    return(0);
}


char tulostus(char merkkijono1[], int size)
{
if(merkkijono1[strlen(merkkijono1) -2] == 'n' && merkkijono1[strlen(merkkijono1) -3] == 'e')
    {
        
            printf("en-merkkijonoon paattyva merkkijono ");    
        
            printf("%s",merkkijono1);
        
    }
    
                return(0);
}
