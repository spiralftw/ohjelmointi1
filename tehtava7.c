/*a program that gives a grade from inputted points
(0 - 11  Hylatty
12 - 13  1
14 - 16  2
17 - 19  3
20 - 22  4
23 - 24  5
muut: Virheellinen pistemaara)*/


#include <stdio.h>

int main(void)
{
int pistemaara;

    printf("Syötä kokeesta saamasi pistemäärä > ");
    scanf("%d", &pistemaara);


if(pistemaara < 0)
{
    printf("Virheellinen pistemaara");
}



else
if
(pistemaara <= 11)
{
    printf("Hylatty");
}

else
if(pistemaara <= 13)
{
    printf("1");
}

else
if(pistemaara <= 16)
{
    printf ("2");
}

else
if(pistemaara <= 19)
{
    printf("3");
}

else
if(pistemaara <= 22)
{
    printf("4");
}
else
if(pistemaara <= 24)
{
    printf("5");
}

else
{
printf("Virheellinen pistemaara");
}




return (0);
}