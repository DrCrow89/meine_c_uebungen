#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int zahlen_array[10];
  int eingabe_zahl = 0;
  for (int i = 0; i < 10; i++)
  {
    printf("Gib die %d. Zahl ein: ", i+1);
    scanf("%d", &zahlen_array[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i+1, zahlen_array[i]);
  }

  while(1)
  {
    printf("Welche Zahl soll ich ausgeben: ");
    scanf("%d", &eingabe_zahl);

    if(eingabe_zahl > 0 && eingabe_zahl < 11)
    {
      printf("Die %d. Zahl ist %d\n", eingabe_zahl, zahlen_array[eingabe_zahl-1]);
    }
    else
    {
      printf("Bitte nur Zahlen von 1 bis 10 eingeben.\n");
    }
  }
  return 0;
}
