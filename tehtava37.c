#include <stdio.h>

int paivienLukumaaraKuukaudessa(int kuukausi);

int main ()
{
int kuukausi = 0,
pituus = 0;
printf("Tama ohjelma kertoo syottamasi kuukauden (1-12) paivien lukumaaran\n");
    printf("Syota kuukausi numerona 1-12 > ");
        scanf("%d",&kuukausi);

            pituus = paivienLukumaaraKuukaudessa(kuukausi);

                if(pituus == -1){
                    printf("Kuukautta %d ei ole olemassa",kuukausi);
                                }
                        if(pituus != -1){
                            printf("Kuukaudessa %d on %d paivaa",kuukausi,pituus);
                                        }


return (0);
}


//tama funktio palauttaa sille annetun kuukauden numeron 1-12 perusteella kyseisen kuukauden
//päivien lukumaaran 28-31

int paivienLukumaaraKuukaudessa(int kuukausi)
{
int pituus;

if(kuukausi < 1 || kuukausi > 12){
    pituus = -1;
                                    }

        switch(kuukausi){

        case 1: 
            pituus = 31;
                break;

        case 2:
            pituus = 28;
                break;

        case 3: 
            pituus = 31;
                break;

        case 4:
            pituus = 30;
                break;

        case 5:
            pituus = 31;
                break;

        case 6: 
            pituus = 30;
                break;

        case 7:
            pituus = 31;
                break;

        case 8: 
            pituus = 31;
                break;

        case 9:
            pituus = 30;
                break;

        case 10:
            pituus = 31;
                break;

        case 11: 
            pituus = 30;
                break;

        case 12: 
            pituus = 31;
                break;
        }






return(pituus);
}