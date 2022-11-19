#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 1000

char syotto(char merkkijono1[], int size);
char laskuri(char merkkijono1[], int size);




int main (void)
{
char merkkijono1[SIZE];



    syotto(merkkijono1, SIZE);

        laskuri(merkkijono1, SIZE);

            return(0);
}

char syotto(char merkkijono1[], int size)
{
char merkkijono2[SIZE];
char merkkijono3[SIZE];

printf("Syota tekstia > ");

for(int n = 0; n < 3; n++)
{
if(merkkijono1[strlen(merkkijono1) -1] == '\n')
{
    merkkijono1[strlen(merkkijono1) -1] == '\0';
}
        if(merkkijono2[strlen(merkkijono2) -1] == '\n')
        {
            merkkijono2[strlen(merkkijono2) -1] == '\0';
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

    if(n == 2)
    {
    fgets(merkkijono3,size,stdin);    
    strcat(merkkijono1, merkkijono3 );
    }


}
        return(0);
}

char laskuri(char merkkijono1[], int size)
{
int n = 0,
    m = 0,
    maara = 0,
    verrattava = 97;

printf("Aakkonen\tKpl\n");

    for(n = 0; n < 26; n ++)
    {
        maara = 0;
       for(m = 0; m < strlen(merkkijono1); m ++)
       {
        
            if(merkkijono1[m] == verrattava)
            {
                maara ++;
                
            }
            
       }     
               printf("%c\t\t%d\n",verrattava,maara);
               verrattava ++;   
                    
    }
    
        return(0);
}