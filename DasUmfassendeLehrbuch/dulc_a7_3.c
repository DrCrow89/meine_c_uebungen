#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main()
{
  struct array_string wort = einlesen_string_in_array();
  char eingabe_buchstabe[2];
  do{
    printf("Bitte geben Sie einen Buchstaben ein: ");
    fgets(eingabe_buchstabe, 100, stdin);
  }while (strlen(eingabe_buchstabe) > 2);

  struct array_string neu = entferne_buchstabe_in_array(wort, eingabe_buchstabe[0]);

  printf("Neues Wort: ");
  ausgabe_string_in_array(neu);

  return 0;
}
