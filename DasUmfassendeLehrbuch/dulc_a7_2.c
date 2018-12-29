#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* tausche_buchstaben(char *uebergabe_wort)
{
  char *tausch_wort1[100] = {' '};
  int j = 0;

  for (int i = strlen(uebergabe_wort)-2; i >= 0 ; i--)
  {
    //vergleich_buchstabe = eingabe_wort[i];
    tausch_wort1[j] = uebergabe_wort[i];
    j++;
    //printf("Der Buchstabe %c in Index[%d]\n", tausch_wort1[j-1], j-1);
  }
  printf("Wort Func: %s\n", tausch_wort1);
  return tausch_wort1;
}

int main()
{
  char eingabe_wort[100];


  while(1)
  {
    printf("Bitte geben Sie ein Wort ein: ");
    fgets(eingabe_wort, 100, stdin);

      char *rueckgabe_array = tausche_buchstaben((char*)eingabe_wort);
      printf("Wort Func: %s\n", rueckgabe_array);

  }
  return 0;
}
