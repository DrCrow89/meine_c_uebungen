#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char eingabe_wort[100];
  char bearbeitetes_wort[100];
  int vergleich_buchstabe;

  while(1)
  {
    printf("Bitte geben Sie ein Wort ein: ");
    fgets(eingabe_wort, 100, stdin);
    printf("Ihre Eingabe: %s\n", eingabe_wort);
    int j = 0;

    for (int i = 0; i < strlen(eingabe_wort) ; i++)
    {
      if(eingabe_wort[i] != 101)
      {
        bearbeitetes_wort[j] = eingabe_wort[i];
        j++;
      }
    }
    printf("Ausgabe: ");
    for (int i = 0; i < strlen(bearbeitetes_wort)-1 ; i++)
    {
      printf("%c", bearbeitetes_wort[i]);
    }
    printf("\nEnde\n");
  }
  return 0;
}
