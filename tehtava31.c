#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kertolaskukysymys(int luku1,int luku2);
int jakolaskukysymys(int luku1,int luku2);

int random();

int uusinta(int luku1,int luku2);

int jakovaikerto();


int main()

{

int luku1 = 0,
luku2 = 0,
kertovastaus = 0,
jakovastaus = 0,
kertoratkaisu = 0,
jakoratkaisu = 0,
kumpi = 0;

while(jakovastaus != -1 || kertovastaus != -1)
{
srand (time(NULL));

    luku1 = random();

        luku2 = random();

            kumpi = jakovaikerto();

                kertoratkaisu = luku1 * luku2;

                  jakoratkaisu = luku1 / luku2;



                    


                        
if (kumpi == 1)
{

    kertovastaus = kertolaskukysymys(luku1,luku2);

    while(kertovastaus != kertoratkaisu)

                            
    kertovastaus = uusinta(luku1,luku2);

       

        if(kertovastaus == -1)
                return(0);



                    if(kertovastaus == kertoratkaisu)
                        printf("Oikein!\n");
                            main();
}
    
if(kumpi == 0)
{



    jakovastaus = jakolaskukysymys(luku1,luku2);


    while(jakovastaus != jakoratkaisu && jakovastaus != -1)

                            
    jakovastaus = uusinta(luku1,luku2);

     if(jakovastaus == -1)
                {return(0);}

       





        if(jakovastaus == -1)
                {return(0);}



                    if(jakovastaus == jakoratkaisu)
                        printf("Oikein!\n");
                            main();
}
else
    jakovaikerto();



                            
                    
}
return(0);
}

            int random()
            {
            int tulos = 0,
                ala = 1,
                yla = 9;
            

            
                

                    tulos = rand() % (yla -ala + 1) + ala;

            
                        return(tulos);
            
                        }





int kertolaskukysymys(int luku1,int luku2)
{
int vastaus;
    printf("Anna luku -1 lopettaaksesi\n");

        printf("Paljonko on %d kertaa %d?\n> ",luku1,luku2);

            scanf("%d",&vastaus);

                return(vastaus);

}




int uusinta(int luku1,int luku2)
{
    int vastaus;
        printf("Anna luku -1 lopettaaksesi\n");

            printf("Vaarin, yrita uudelleen\n> ");

                scanf("%d",&vastaus);

                    return(vastaus);
}




int jakolaskukysymys(int luku1,int luku2)
{
int vastaus;


    printf("Anna luku -1 lopettaaksesi\n");

        printf("Paljonko on %d jaettuna %d?\n> ",luku1,luku2);

            scanf("%d",&vastaus);

                return(vastaus);
}






int jakovaikerto()
{
            int tulos = 0,
                ala = 1,
                yla = 9;
            

            
                

                    tulos = rand() % (yla -ala + 1) + ala;

                        if(tulos % 2 == 0)

                            tulos = 1;
                        
                        else

                            tulos = 0;

            
                        return(tulos);
            
                        }