// kysy sakelta tehtava 16 pyöristys
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 80

typedef struct tiedot
{   
    char jnimi[SIZE];
    int vmaara;
    int tmaara;
    double taso;
}tiedot;

typedef struct kaikkij
{
    tiedot j0;
    tiedot j1;
    tiedot j2;
    tiedot j3;
}kaikkij;


kaikkij luetiedot(int jmaara);

tiedot kysytiedot(void);

kaikkij jarjestely(kaikkij kaikkij);




int main()
{
    int jmaara = 0;
    kaikkij kaikkij;

    printf("Syota vertailtavien joukkueiden maara (max.4) > ");
    scanf("%d",&jmaara);

    kaikkij = luetiedot(jmaara);

    jarjestely(kaikkij);


    return(0);
}







kaikkij luetiedot(int jmaara)
{
    int n = 0;
    tiedot joukkue0;
    tiedot joukkue1;
    tiedot joukkue2;
    tiedot joukkue3;
    kaikkij kaikkij;
    

    while(n != jmaara)
    {
        if(n == 0)
        {
            printf("%d",n);
            joukkue0 = kysytiedot();
            kaikkij.j0 = joukkue0; 
        }

        if(n == 1)
        {
            printf("%d",n);
            joukkue1 = kysytiedot();
            kaikkij.j1 = joukkue1;

        }

        if(n == 2)
        {
            printf("%d",n);
            joukkue2 = kysytiedot();
            kaikkij.j2 = joukkue2;
        }

        if(n == 3)
        {
            printf("%d",n);
            joukkue3 = kysytiedot();
            kaikkij.j3 = joukkue3;
        }
            n++;
    }
    return(kaikkij);
}



tiedot kysytiedot(void)
{

    tiedot joukkue;
    fgetc(stdin);

    printf("Syota joukkueen nimi > ");
    fgets(joukkue.jnimi, SIZE, stdin);

    printf("Syota voittojen maara > ");
    scanf("%d",&joukkue.vmaara);

    printf("Syota tappioiden maara > ");
    scanf("%d",&joukkue.tmaara);
            
    *&joukkue.taso = joukkue.vmaara - joukkue.tmaara;

     

    return(joukkue);
}


kaikkij jarjestely(kaikkij kaikkij)
{
   kaikkij.j0.taso;
   kaikkij.j1.taso;
   kaikkij.j2.taso;
   kaikkij.j3.taso;
    return(kaikkij);
}




