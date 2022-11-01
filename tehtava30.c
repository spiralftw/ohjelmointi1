#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kysymys(int luku1,int luku2);

int random();

int uusinta(int luku1,int luku2);


int main()

{

int luku1 = 0,
luku2 = 0,
vastaus = 0,
ratkaisu = 0;

srand (time(NULL));

    luku1 = random();

        luku2 = random();

            vastaus = kysymys(luku1,luku2);

                ratkaisu = luku1 * luku2;

            

while(vastaus != ratkaisu && vastaus != -1)

                            
    vastaus = uusinta(luku1,luku2);

       





        if(vastaus == -1)
                {return(0);}



                    if(vastaus == ratkaisu)
                        printf("Oikein!");

    





                            
                    

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





int kysymys(int luku1,int luku2)
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