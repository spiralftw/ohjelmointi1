

#include <stdio.h>

int main()
{

double
luku = 0,
summa = 0,
keskiarvo = 0,
laskuri = 0;

printf("Syota lukuja > ");
scanf("%lf", &luku);

while(luku >= 0)
{

    laskuri ++;

    summa += luku;

    keskiarvo = summa / laskuri;

scanf ("%lf", &luku);
}
/*
if (laskuri == 1)

    laskuri ++;

    keskiarvo = summa / laskuri;
*/
printf("keskiarvo: %.2lf",keskiarvo);



return(0);
}