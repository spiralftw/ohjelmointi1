#include <stdio.h>

int main()
{
double
luku = 0,
summa = 0,
keskiarvo = 0,
laskuri = 0;

printf("Syota lukuja, lopeta lukujen syottaminen negatiivisella luvulla > ");
scanf("%lf", &luku);

do 
{
    laskuri ++;

    summa += luku;
   
    keskiarvo = summa / laskuri;

    scanf("%lf", &luku);
}
while(luku >= 0);



    printf("keskiarvo: %.2lf",keskiarvo);

return(0);
}
