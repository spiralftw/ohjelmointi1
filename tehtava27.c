#include <stdio.h>
int tmsSekunteiksi(int tunnit, int minuutit, int sekuntit);
int aikaeroSekunneissa(int sekuntit, int sekuntit2);
int tuntierof(int aikaero);
int minuuttierof(int aikaero);
int sekuntierof(int aikaero);



int main()
{
int
tunnit = 0,
minuutit = 0,
sekuntit = 0,
tunnit2 = 0,
minuutit2 = 0,
sekuntit2 = 0,
aikaero = 0,
tuntiero = 0,
minuuttiero = 0,
sekuntiero = 0;

printf("Syota tunnit > ");
scanf("%d",&tunnit);

    printf("Syota minuutit > ");
    scanf("%d",&minuutit);

        printf("Syota sekuntit > ");
        scanf("%d",&sekuntit);

printf("Syota tunnit > ");
scanf("%d",&tunnit2);

    printf("Syota minuutit > ");
    scanf("%d",&minuutit2);

        printf("Syota sekuntit > ");
        scanf("%d",&sekuntit2);

                sekuntit = tmsSekunteiksi(tunnit,minuutit,sekuntit);

                    sekuntit2 = tmsSekunteiksi(tunnit2, minuutit2, sekuntit2);

                        aikaero = aikaeroSekunneissa(sekuntit,sekuntit2);

                            tuntiero =  tuntierof(aikaero);

                                minuuttiero = minuuttierof(aikaero);

                                    sekuntiero = sekuntierof(aikaero);


                     printf("Aikaero on: %d sekuntia\n",aikaero);

                     printf("Aika on %d tuntia %d minuuttia %d sekuntia",tuntiero,minuuttiero,sekuntiero);


return(0);
}


        int tmsSekunteiksi(int tunnit, int minuutit, int sekuntit)
        {
            

        minuutit = minuutit + tunnit * 60;

        sekuntit = sekuntit + minuutit * 60;






        return(sekuntit);
        }

                    int aikaeroSekunneissa(int sekuntit, int sekuntit2)
                    {
                    int aikaero = 0;

                    if(sekuntit < sekuntit2)
                    aikaero = sekuntit2 - sekuntit;

                    if(sekuntit > sekuntit2)
                     aikaero = sekuntit - sekuntit2;
                


                    return(aikaero);
                    }






                                        int tuntierof(int aikaero)
                                        {

                                            int tuntiero;


                                            tuntiero = aikaero / 3600;
                                            




                                        return(tuntiero);
                                        }





                                                        int minuuttierof(int aikaero)
                                                        {
                                                        int tuntiero;
                                                        int minuuttiero;

                                                                tuntiero = aikaero / 3600;

                                                                aikaero = aikaero - tuntiero * 3600;

                                                                minuuttiero = aikaero / 60;




                                                        return(minuuttiero);
                                                        }

                            






                                                                                        int sekuntierof(int aikaero)
                                                                                        {
                                                                                        int tuntiero;
                                                                                        int minuuttiero;
                                                                                        int sekuntiero = 0;




                                                                                                tuntiero = aikaero / 3600;

                                                                                                aikaero = aikaero - tuntiero * 3600;

                                                                                                minuuttiero = aikaero / 60;

                                                                                                aikaero = aikaero - minuuttiero * 60;

                                                                                                sekuntiero = aikaero;

                                        


                                                                                        return(sekuntiero);
                                                                                        }