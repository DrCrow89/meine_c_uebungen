#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

eigensort(int *uebergabe_array, int lenght)
{
  int temp_array[lenght];
  int min_zahl = uebergabe_array[0];
  int min_index = 0;
  for (int i = 0; i < lenght; i++)
  {
    for (int j = i+1; j < lenght; j++)
    {
      if (uebergabe_array[j] < min_zahl)
      {
        min_zahl = uebergabe_array[j];
        min_index = j;
      }
    }
  }
}

int main()
{
  int zahlen_array_eingabe[] = {1,3,9,0,4,6,2,8,7,55};

  eigensort(zahlen_array_eingabe, 10);

  printf("Sortiert: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  return 0;
}
