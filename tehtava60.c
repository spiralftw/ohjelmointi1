#include <stdio.h>

typedef struct koordinaatit
{   
double pistex;
double pistey;
}koordinaatit;

int main()
{
int n = 5;

struct koordinaatit piste[n];

for(n = 5; n != 0; n--)
{  
    printf("Syota X > ");
    scanf("%d",&piste[n].pistex);

    printf("Syota Y > ");
    scanf("%d",&piste[n].pistey);

}
for(n = 5; n != 0; n--)
{
    printf("%d, %d",piste[n].pistex, piste[n].pistey);
}
 

    return(0);
}