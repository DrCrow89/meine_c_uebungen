#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char eingabe_wort[100];
  char tausch_wort[100];
  int vergleich_buchstabe;

  while(1)
  {
    printf("Bitte geben Sie ein Wort ein: ");
    fgets(eingabe_wort, 100, stdin);
    printf("Ihre Eingabe: %s\n", eingabe_wort);
    int j = 0;

    for (int i = strlen(eingabe_wort)-2; i >= 0 ; i--)
    {
      //vergleich_buchstabe = eingabe_wort[i];
      tausch_wort[j] = eingabe_wort[i];
      j++;
      //printf("Der Buchstabe %c\n", vergleich_buchstabe);
      printf("Der Buchstabe %c in Index[%d]\n", tausch_wort[j-1], j-1);
    }
    printf("Ende\n");
  }
  return 0;
}
