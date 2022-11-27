#include <stdio.h>
#include <string.h>

#define SIZE 80

typedef struct tiedot
{   
    char jnimi[SIZE];
    int vmaara;
    int tmaara;
}tiedot;

int main()
{
    tiedot j1tiedot = {"Tampere", 3, 2};
    printf("%s,%d,%d",j1tiedot.jnimi,j1tiedot.vmaara,j1tiedot.tmaara);
    return(0);
}
