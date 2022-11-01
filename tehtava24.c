//ohjelma, joka lukee viisi lukua (double), pyöristää luvut
//ja tulostaa alkuperäisen ja tulostetun

#include <stdio.h>
#include <math.h>

double pyoristin();

int main()
{

pyoristin();


return(0);
}


double pyoristin()
{
double 
luku1,
luku2,
luku3,
luku4,
luku5,
pyoristettu1,
pyoristettu2,
pyoristettu3,
pyoristettu4,
pyoristettu5;

printf("Syota viisi lukua \n> ");
scanf("%lf",&luku1);
printf("\n> ");
scanf("%lf",&luku2);
printf("\n> ");
scanf("%lf",&luku3);
printf("\n> ");
scanf("%lf",&luku4);
printf("\n> ");
scanf("%lf",&luku5);

pyoristettu1 = floor(luku1 + 0.5);
pyoristettu2 = floor(luku2 + 0.5);
pyoristettu3 = floor(luku3 + 0.5);
pyoristettu4 = floor(luku4 + 0.5);
pyoristettu5 = floor(luku5 + 0.5);


printf("%.2lf pyoristettuna on %.lf\n",luku1,pyoristettu1);
printf("%.2lf pyoristettuna on %.lf\n",luku2,pyoristettu2);
printf("%.2lf pyoristettuna on %.lf\n",luku3,pyoristettu3);
printf("%.2lf pyoristettuna on %.lf\n",luku4,pyoristettu4);
printf("%.2lf pyoristettuna on %.lf\n",luku5,pyoristettu5);



return(0);
}