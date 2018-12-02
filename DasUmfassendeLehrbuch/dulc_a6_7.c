#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  //int zahlen_array_eingabe[] = {1,3,9,0,4,6,2,8,7,55};
  int zahlen_array_eingabe[10];
  int eingabe_zahl = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Gib die %d. Zahl ein: ", i+1);
    scanf("%d", &zahlen_array_eingabe[i]);
  }

  bubblesort(zahlen_array_eingabe, 10);

  printf("Sortiert: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");
  
  return 0;
}
