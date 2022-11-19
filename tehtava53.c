#include <stdio.h>

char etsiMerkkijonoAlusta(char mjono1[], char mjono2[], char loydetty[]);

int main(void) {
    
    char mjono1[100];
    char mjono2[100]; 
    char loydetty[10]={'\0'};

printf("Syota sana > ");
    scanf("%s",mjono1);
printf("Syota toinen sana > ");
    scanf("%s",mjono2);

    
    
    etsiMerkkijonoAlusta(mjono1, mjono2, loydetty); 

    printf("%s", loydetty);
    
    return 0;
}

char etsiMerkkijonoAlusta(char mjono1[], char mjono2[], char loydetty[])
{
int m = 0;

    for(m = 0; m < 10; m++)
    {
        if(mjono1[m] == mjono2[m])
        {
            loydetty[m] = mjono1[m];
        }
    }
return(loydetty[0]);
}