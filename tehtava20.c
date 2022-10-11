#include <stdio.h>

int main()
{
double
luku = 0,
summa = 0,
keskiarvo = 0,
laskuri = 0;

        printf("Syota lukuja, lopeta syottaminen negatiivisella luvulla > ");
        scanf("%lf",&luku);

for(luku = 0; luku >= 0;)
 
{
    laskuri ++;
    
    summa += luku;

    keskiarvo = summa / laskuri;


        scanf("%lf",&luku);
    

    
}

        printf("Keskiarvo on: %.2lf",keskiarvo);

return(0);
}