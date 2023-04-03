#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char n[128];
    FILE *fp = fopen("nimet.txt", "r");


  while (fgets(n, sizeof n, fp) != NULL)
  {
    n[strcspn(n, "\n")] = 0;

    char *name = strtok(n, ";");
    char *age = strtok(NULL, ";");
    printf("%s %s\n", name, age);
  }

    fclose(fp);
    return 0;
}
