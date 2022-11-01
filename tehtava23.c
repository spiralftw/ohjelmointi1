#include <stdio.h>

double laskeParkkiMaksu(double aika);


int main()
{

double
aika1 = 0.00,
aika2 = 0.00,
aika3 = 0.00,
kokoaika = 0.00,
veloitus1 = 0.00,
veloitus2 = 0.00,
veloitus3 = 0.00,
kokoveloitus = 0.00;


printf("Syota kolme parkkiaikaa\n> ");
    scanf("%lf",&aika1);

        printf("> ");
            scanf("%lf",&aika2);

                 printf("> ");
                 scanf("%lf",&aika3);






veloitus1 = laskeParkkiMaksu(aika1);


    veloitus2 = laskeParkkiMaksu(aika2);
   

        veloitus3 = laskeParkkiMaksu(aika3);
       


kokoaika = aika1 + aika2 + aika3;

kokoveloitus = veloitus1 + veloitus2 + veloitus3;

    
    printf(" Asiakas\tTunnit\t Veloitus\n");
    printf("\t1 \t%.2lf \t %.2lf\n",aika1,veloitus1);
    printf("\t2 \t%.2lf \t %.2lf\n",aika2,veloitus2);
    printf("\t3\t%.2lf \t %.2lf\n",aika3,veloitus3);
    printf("YHTEENSA\t%.2lf \t %.2lf",kokoaika,kokoveloitus);



return(0);
}





double laskeParkkiMaksu(double aika)
{

double veloitus;

   veloitus = 2.00;
        if(aika > 3.00)
            veloitus = veloitus + ((aika - 3.00)* 0.5);
        if (aika >= 24)
            veloitus = 10.00;
      




return(veloitus);
}


