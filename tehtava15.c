#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

int main()
{
int luku = 0;
double desluku = 0;
int n = 0;
char taulukko[5];

    printf("> ");
    fgets(taulukko,7,stdin);

    if(taulukko[0] == '-')
    {
        printf("Luku %s eroteltuna: ",taulukko);
        for(n = 1; n < 6; n++)
        {
            printf("-%c ",taulukko[n]);
        }
    }
    if(taulukko[0] != '-' && taulukko[0] != '0')
    {
        printf("Luku %s eroteltuna: ",taulukko);
        for(n = 0; n < 6; n++)
        {
            printf("%c ",taulukko[n]);
        }
    }
    if(taulukko[0] == '0')
    {
        printf("Luku %c eroteltuna: ",taulukko[4]);
        for(n = 0; n < 6; n++)
        {
            printf("%c ",taulukko[n]);
        }
    }      
return 0;
}