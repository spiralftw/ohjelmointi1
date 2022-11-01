#include <stdio.h>
#include <math.h>

int main()
{
double luku= 0,
vastaus = 0,
pyoristettu = 0;

for(int laskuri = 5; laskuri >= 0; laskuri--)
    {
    printf("Syota viisi lukua > ");
    scanf("%lf",&luku);
    pyoristettu = floor(luku + 0.5);
    printf("%lf pyoristettuna on %lf\n",luku,pyoristettu);
    }





return(0);
}