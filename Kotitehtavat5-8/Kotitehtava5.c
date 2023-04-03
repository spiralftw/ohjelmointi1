// Pankkiautomaatti

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 128

double valikko(char tilanne[SIZE]);
double aloitus(char tilanne[SIZE]);
double otto(char tilanne[SIZE]);
double saldo(char tilanne[SIZE]);
double tapahtumat(char tilanne[SIZE]);
void liittyma(char tilanne[SIZE]);


int main()
{
    
    int tapahtuma = 0;
    char tilanne[SIZE];
    

    tilanne[SIZE] = aloitus(tilanne);


    return(0);   
}


//ALOITUS FUNKTIO
//avattavan tiedoston pitää olla .acc muodossa
double aloitus(char tilanne[SIZE])
{
    
    FILE *fp;
    char tilinro[SIZE];
    char pin[SIZE];
    char pinput[SIZE];
    char testi[SIZE];




    printf("Syota tilinumerosi > ");
    scanf("%s", &tilinro);
    strcat(tilinro,".acc");

    if ((fp = fopen(tilinro, "r")) == NULL)
    {
	    printf("Tilia ei loydy, tarkista tilinumerosi\n");	    
	    return EXIT_FAILURE;
	}
    fscanf(fp, "%s", pin);

    printf("Syota PIN > ");
	scanf("%s",&pinput);

    while (strcmp(pin, pinput) != 0)
    {
	    printf("Vaara PIN\nSyota PIN uudestaan > ");
	    scanf("%s",&pinput);
    }
    fscanf(fp, "%s", tilanne);
    valikko(tilanne);
    

    fclose(fp);


    return(tilanne[SIZE]);
}



//VALIKKO FUNKTIO
double valikko(char tilanne[SIZE])
{

    int tapahtuma = 0;
    printf("Valitse toiminto syottamalla numero 1-4\n 1: Otto\n 2: Saldo\n 3: Tapahtumat\n 4: Liittyman lataus Puheaika\n(Voit sulkea sovelluksen syottamalla numeron 5) \n > ");

    scanf ("%d", &tapahtuma);

    switch(tapahtuma) {

	case 1:
	    otto(tilanne);
	    break;

	case 2:
	    saldo(tilanne);
	    break;
	case 3:
	    tapahtumat(tilanne);
	    break;
	case 4:
	    liittyma(tilanne);
	    break;
	case 5:
	    return(0);
	    break;

    return(tapahtuma);
    }
}


//OTTO FUNKTIO
double otto(char tilanne[SIZE])
{
    int viiskyt = 0;
    int kakskyt = 0;
    int summa = 0;
    int tark_summa = 0;
    int alkuun = 1;

    printf("Syota summa (20€ - 40€) > ");
    scanf("%d", &summa);

    if((summa % 50) != 0) {
        viiskyt = summa / 50;
        tark_summa = summa - viiskyt * 50;
        kakskyt = tark_summa / 20;
    } else {
        viiskyt = summa / 50;
        kakskyt = 0;
    }

    if((tark_summa % 20) != 0) {
        viiskyt--;
        tark_summa = summa - viiskyt * 50;
        kakskyt = tark_summa / 20;
    }

    printf("Ota %d x 50e seteleita ja %d x 20e seteleita.\n(Voit palata valikkoon syottamalla luvun 0)",viiskyt,kakskyt);
    scanf("%d",&alkuun);

    if(alkuun == 0)
	valikko(tilanne);
}


// SALDO FUNKTIO
double saldo(char tilanne[SIZE])
{

    int alku = 0;

    printf("Tilin tilanne\nTilin saldo:              %s+\n(Voit palata valikkoon syottamalla luvun 0)\n> ",tilanne);
    
    scanf("%d",&alku);
    if(alku == 0)
	valikko(tilanne);
}


//TAPAHTUMAT FUNKTIO
double tapahtumat(char tilanne[SIZE])
{
    int tapatieto = 0,
	alkuun = 0;

    printf("Haluatko tiedot?\n1: Naytolle\n2: Kuitille\n(Voit palata valikkoon syottamalla luvun 0)\n> ");
    
    scanf("%d", &tapatieto);

    if(tapatieto == 0)
	valikko(tilanne);

    if(tapatieto == 1)
        printf("Oikealla Otolla voisit nyt katsoa tilitapahtumiasi naytolta.\n(Voit palata valikkoon syottamalla luvun 0)\n> ");
                        
    if(tapatieto == 2)
	printf("Kuittia tulostetaan..., oikealla Otolla voisit nyt katsoa tilitapahtumiasi kuitilta.\n(Voit palata valikkoon syottamalla luvun 0)\n> ");
                    
    scanf("%d", &alkuun);

    if(alkuun == 0)
        valikko(tilanne);
    
    return(0);
}

//LIITTYMA FUNKTIO
void liittyma(char tilanne[SIZE])
{

    int alku = 1;

    printf("Valitsit Liittyman lataus Puheaika- toiminnon.\n(Voit aina palata valikkoon syottamalla luvun: 0)\n> ");
    scanf("%d",&alku);

    if(alku == 0)
	valikko(tilanne);
}
