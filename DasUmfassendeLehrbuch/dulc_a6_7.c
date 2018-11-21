#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int zahlen_array_eingabe[10];
  int zahlen_array_sort[10];
  int eingabe_zahl = 0;
  int zaehler_ob_groesser = 0;
  for (int i = 0; i < 10; i++)
  {
    printf("Gib die %d. Zahl ein: ", i+1);
    scanf("%d", &zahlen_array_eingabe[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    zaehler_ob_groesser = 0;
    for (int j = 0; j < 10; j++)
    { /* 1 7 5 9 2 1 2 6 7 0*/
      if(zahlen_array_eingabe[i] <= zahlen_array_eingabe[j])
      {
        /* Zahl ist kleiner, mache nichts */
      }
      else
      {
        zaehler_ob_groesser++;
      }
      zahlen_array_sort[zaehler_ob_groesser];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i+1, zahlen_array_sort[i]);
  }
  return 0;
}
