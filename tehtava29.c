#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rahanheitto();

int main()
{
int heitto = 100,
tulos = 0,
kruunu = 0,
klaava = 0,
laskuri = 0;


srand (time(NULL));

for(laskuri = 100; laskuri > 0; laskuri --)
{
    
tulos = rahanheitto();



                if (tulos == 1)
                klaava ++;

                else
                kruunu ++;
}




printf("Heittojen tulos: %d kruunua ja %d klaavaa",kruunu,klaava);


return(0);
}


            int rahanheitto()
            {
            int
            random = 0,
            tulos = 0,
            laskuri = 0;
           
        
            

                random = rand();
               


                if (random % 2 == 0)
                tulos = 1;

                else
                tulos = 0;
            
      
            
            return(tulos);
            
        
            }
            
            