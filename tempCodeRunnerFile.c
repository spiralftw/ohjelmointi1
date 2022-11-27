#include <stdio.h>

int main(void)
{
    double lopeta = 0;
    double kulutus1 = 0;
    double kulutus2 = 0;
    int laskuri = 0;

    while(lopeta != 1)
    {
        double litra = 0;
        double kilo = 0;


        printf("Anna tankatun bensiinin maara ( -1 lopettaa) > ");
        scanf("%lf",&litra);

        if(litra == -1)
        {
            break;
        }

        printf("Ajetut kilometrit > ");
        scanf("%lf",&kilo);

        if(laskuri == 0){
            kulutus1 = litra / (kilo / 100);
        }

        if(laskuri == 1){
            kulutus2 = litra / (kilo / 100);
        }

        laskuri++;
        

    }
    double keskikulutus = kulutus1 + kulutus2;
    keskikulutus = keskikulutus / 2;

    printf("-1\n");
    printf("%.3lf\n",kulutus1);
    printf("-1\n");
    printf("%.3lf\n",kulutus2);
    printf("-1\n");
    printf("%.3lf\n",keskikulutus);





    return(0);
}