#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main()
{
  char eingabe_wort[100];
  char eingabe_buchstabe[100];
  int string_laenge;

  while(1)
  {
    printf("Bitte geben Sie ein Wort ein: ");
    fgets(eingabe_wort, 100, stdin);
    printf("Ihre Eingabe: %s\n", eingabe_wort);

    do{
      printf("Bitte geben Sie einen Buchstaben ein: ");
      fgets(eingabe_buchstabe, 100, stdin);
      string_laenge = strlen(eingabe_buchstabe);
    }while (string_laenge > 2);

    printf("Das Wort %s hat den Buchstaben %s insgesamt %d mal.\n", eingabe_wort, eingabe_buchstabe, count_buchstaben((char*)eingabe_wort, eingabe_buchstabe[0]));
  }
  return 0;
}
