#include <stdio.h>
#include <string.h>

int omaStrcmp(char * muisti1, char * muisti2);

int main()
{
    char jono1[100];
    char jono2[100];
    char *muisti1;
    char *muisti2;
    int vastaus;

    //printf("Syota sana > ");
    scanf("%s",jono1);
    muisti1 = &jono1[0];

    //printf("Syota toinen sana > ");
    scanf("%s",jono2);
    muisti2 = &jono2[0];

    vastaus = omaStrcmp(muisti1, muisti2);

    if(vastaus == 1)
    {
        printf("%s > %s",muisti1,muisti2);

    }
    if(vastaus == 2)
    {
        printf("%s < %s",muisti1,muisti2);
    }
    
    if(vastaus == 3)
    {
        printf("%s == %s",muisti1,muisti2);
    }

return(0);
}

int omaStrcmp(char * muisti1, char * muisti2)
{

    int laskuri1 = 0;
    int laskuri2 = 0;
    int vastaus = 0;

    while(*muisti1 != '\0' || *muisti2 != '\0')
    {

        if(*muisti1 != *muisti2)
        {
            if(*muisti1 > *muisti2)
            {
                vastaus = 1;
                break;
            }

            if(*muisti1 < *muisti2)
            {
                vastaus = 2;
                break;
            }
        }
        if(*muisti1 == *muisti2)
        {
            vastaus = 3;
        }
 


        *muisti1++;
        *muisti2++;
    }


    return(vastaus);
}