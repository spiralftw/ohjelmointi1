#include <stdio.h>

int main ()
{
int n = 0,
kokonaisluku = 0,
kaannettu = 0,
jaava = 0;


printf("Syötä viisnumeroinen kokonaisluku > ");
scanf("%d",&kokonaisluku);


n = kokonaisluku;

while(n != 0)
{
    jaava = n % 10;
    kaannettu = kaannettu * 10 + jaava;
    n = n / 10;
}


if(kokonaisluku > 99999 || kokonaisluku < 10000)
    printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
    
else
if(kaannettu == kokonaisluku)
    printf("Luku %d on palindromi",kokonaisluku);



else
    printf("luku %d ei ole palindromi", kokonaisluku);




return(0);
}
