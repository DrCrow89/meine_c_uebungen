#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int zahlen_array_eingabe[10];
  int eingabe_zahl = 0;
  int temp = 0;
  for (int i = 0; i < 10; i++)
  {
    printf("Gib die %d. Zahl ein: ", i+1);
    scanf("%d", &zahlen_array_eingabe[i]);
  }

  for (int i = 1; i < 10; i++)
  {
    for (int j = 0; j < 10 - i; j++)
    {
      if (zahlen_array_eingabe[j] > zahlen_array_eingabe[j+1])
      {
        temp = zahlen_array_eingabe[j];
        zahlen_array_eingabe[j] = zahlen_array_eingabe[j+1];
        zahlen_array_eingabe[j+1] = temp;
      }
    }
  }

  printf("Sortiert: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");
  
  return 0;
}
