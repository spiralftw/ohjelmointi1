/*tehdään ohjelma, joka lukee käyttäjän 
lainasumman, lainakoron ja lainapäivien määrän
ohjelma laskee paljonko asiakas joutuu maksamaan
korkoa laina-ajalta.*/

#include <stdio.h>

int main()
{
double lainasumma,
lainakorko,
lainapaivat,
kokonaiskorko,
korko;

printf("Syötä lainan summa > ");

scanf("%lf",&lainasumma);

printf("Syötä lainan korko > ");

scanf("%lf",&lainakorko);

printf("Syötä lainapäivien määrä > ");

scanf("%lf",&lainapaivat);

korko=lainakorko/100;

kokonaiskorko=lainasumma*korko*lainapaivat/365;



printf("Lainapaaoman %.2lf euroa korko %.lf paivalta korkoprosentilla %.2lf on yhteensa %.2lf euroa.",lainasumma,lainapaivat,lainakorko,kokonaiskorko);

return (0);

} 

