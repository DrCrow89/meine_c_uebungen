#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char eingabe_wort[100];
  char vergleich_wort[2];
  char eingabe_buchstabe[100];
  char vergleich_buchstabe[2];
  int string_laenge;
  int anzahl_buchstabe;
  int test_anzahl_buchstaben;

  while(1)
  {
    printf("Bitte geben Sie ein Wort ein: ");
    fgets(eingabe_wort, 100, stdin);
    printf("Ihre Eingabe: %s\n", eingabe_wort);

    do{
      printf("Bitte geben Sie einen Buchstaben ein: ");
      fgets(eingabe_buchstabe, 100, stdin);
      string_laenge = strlen(eingabe_buchstabe);
      vergleich_buchstabe[0] = eingabe_buchstabe[0];
    }while (string_laenge > 2);
    //check_anzahl_buchstaben(eingabe_wort, 100);
    for (int i = 0; i < strlen(eingabe_wort); i++)
    {
      vergleich_wort[0] = eingabe_wort[i];
      if(strcmp(vergleich_buchstabe, vergleich_wort) == 0)
      {
        //printf("Der Buchstabe %s und %s sind gleich\n", vergleich_buchstabe, vergleich_wort);
        anzahl_buchstabe++;
      }
      else
      {
        //printf("Der Buchstabe %s und %s sind nicht gleich\n", vergleich_buchstabe, vergleich_wort);
      }
    }
    printf("Das Wort %s hat den Buchstaben %c: %d mal \n", eingabe_wort, vergleich_buchstabe[0], anzahl_buchstabe);
    test_anzahl_buchstaben = check_anzahl_buchstaben(eingabe_wort, strlen(eingabe_wort), eingabe_buchstabe, 2);
    printf("Das Wort hat den Buchstaben %d Buchstaben.\n", test_anzahl_buchstaben);
  }
  return 0;
}
