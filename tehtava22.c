#include <stdio.h>

int main()
{
int
binaari = 0,
desimaali = 0,
kerroin = 1,
jaava = 0;

    printf("Syota viisinumeroinen binaariluku\n>");
    scanf("%d",&binaari);

while(binaari != 0)
{
    jaava = binaari % 10;
    desimaali = desimaali + jaava * kerroin;
    binaari = binaari / 10;
    kerroin = kerroin * 2;
}
printf("%d",desimaali);








return(0);
}