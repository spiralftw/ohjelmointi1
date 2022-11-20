char mystrcpy(char* kohde, const char* lahde)
{
while(*lahde != '\0')
    {
        *kohde = *lahde;
        *kohde++;
        *lahde++;
    }
    return(*kohde);
}

char mystrcat(char* kohde, char* lahde)
{
  	while(*++kohde);
  	
  	while(*(kohde++) = (*lahde++));
    return(0);
}