#include <stdio.h>


int kaannaLuku(int luku)
{
int kaannettyLuku = 0;

while (luku > 0) {
kaannettyLuku = kaannettyLuku * 10 + luku % 10;
luku /= 10;
}

return kaannettyLuku;
}

int main()
{
int luku;
printf("Anna luku: ");
scanf("%d", &luku);
printf("Luku %d kaannettyna on %d\n", luku, kaannaLuku(luku));

return 0;
}
