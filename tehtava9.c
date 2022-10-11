/* a program that reads 10 numbers inputted 
by the user and prints out which one is the largest*/

#include <stdio.h>

int

main(void)
{
int
luku1 = 0,
luku2 = 0,
luku3 = 0,
luku4 = 0,
luku5 = 0,
luku6 = 0,
luku7 = 0,
luku8 = 0,
luku9 = 0,
luku10 = 0,
suurin = 0;

printf("Syötä 10-lukua, yksi kerrallaan\n");


printf("Syötä ensimmäinen luku > ");
scanf("%d",&luku1);

printf("Syötä toinen luku > ");
scanf("%d",&luku2);

printf("Syötä kolmas luku > ");
scanf("%d",&luku3);

printf("Syötä neljäs luku > ");
scanf("%d",&luku4);

printf("Syötä viides luku > ");
scanf("%d",&luku5);

printf("Syötä kuudes luku > ");
scanf("%d",&luku6);

printf("Syötä seitsemäs luku > ");
scanf("%d",&luku7);

printf("Syötä kahdeksas luku > ");
scanf("%d",&luku8);

printf("Syötä yhdeksäs luku > ");
scanf("%d",&luku9);

printf("Syötä kymmenes luku > ");
scanf("%d",&luku10);

suurin = luku1;


if (suurin < luku2)
suurin = luku2;

if (suurin < luku3)
suurin = luku3;

if (suurin < luku4)
suurin = luku4;

if (suurin < luku5)
suurin = luku5;

if (suurin < luku6)
suurin = luku6;

if (suurin < luku7)
suurin = luku7;

if (suurin < luku8)
suurin = luku8;

if (suurin < luku9)
suurin = luku9;

if (suurin < luku10)
suurin = luku10;


printf("Suurin syottamasi luku oli %d", suurin);





return(0);
}
