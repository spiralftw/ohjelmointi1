#include <stdio.h>

int onkokarkausvuosi(int vuosiluku);

int main(){

int vuosiluku = 0,
karkausvuosi = 0;
printf("Tama ohjelma kertoo onko syottamasi vuosi karkausvuosi\n");
    printf("Syota vuosiluku > ");
        scanf("%d",&vuosiluku);

karkausvuosi = onkokarkausvuosi(vuosiluku);

if(karkausvuosi == 1){
    printf("Vuosi %d on karkausvuosi",vuosiluku);
}
if(karkausvuosi != 1){
    printf("Vuosi %d ei ole karkausvuosi",vuosiluku);
}



return(0);
}

int onkokarkausvuosi(int vuosiluku){
int kumpi = 0;


if(vuosiluku == 400 != 0 && vuosiluku % 4 != 0){
    kumpi = 1;
}
else if(vuosiluku % 100 == 0){

    kumpi = -1;
}

    return(kumpi);
}