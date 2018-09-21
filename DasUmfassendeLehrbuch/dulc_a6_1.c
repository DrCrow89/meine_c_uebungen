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

  while(1)
  {
    anzahl_buchstabe = 0;
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
        //Wenn die Buchstaben gleich sind, zähle die Anzahl um eins nach oben.
        //printf("Der Buchstabe %s und %s sind gleich\n", vergleich_buchstabe, vergleich_wort);
        anzahl_buchstabe++;
      }
      else
      {
        //Wenn die Buchstaben nicht gleich sind, mache nichts.
        //printf("Der Buchstabe %s und %s sind nicht gleich\n", vergleich_buchstabe, vergleich_wort);
      }
    }
    printf("Das Wort %s hat den Buchstaben %c: %d mal \n", eingabe_wort, vergleich_buchstabe[0], anzahl_buchstabe);
  }
  return 0;
}

/*
* Aufruf des Programms über: "./FileObject.o lala a"
*/
/*
int laenge_string(char string[]) {
   int i=0;

   while (string[i] != '\0') i++;

   return i;
}

int main(int argc, char *arga[]) {
  int i;
  printf("%s hat %d Zeichen und soll mit Buchstabe %s durchsucht werden.\n", arga[1], laenge_string(arga[1]), arga[2]);
 }
 */
