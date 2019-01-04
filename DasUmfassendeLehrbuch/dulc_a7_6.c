#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

void eigensort(int *uebergabe_array, int lenght)
{
  int temp_array[lenght];
  int min_zahl = 0;
  int min_index = 0;
  int temp_zahl = 0;

  for (int i = 0; i < lenght-1; i++)
  {
    min_index = i;
    min_zahl = uebergabe_array[i];
    for (int j = i+1; j < lenght; j++)
    {
      printf("Bei i: %d und j: %d ist der Inhalt: %d und min: %d\n",i,j, uebergabe_array[j], min_zahl);
      if (uebergabe_array[j] < uebergabe_array[min_index])
      {
        min_index = j;
        min_zahl = uebergabe_array[j]
      }
      else
      {
        //Falls die Zahl größer ist, tue nichts. Wir suchen die kleinste Zahl.
      }
    }
    temp_zahl = uebergabe_array[min_index];
    uebergabe_array[min_index] = uebergabe_array[i];
    uebergabe_array[i] = temp_zahl;
    printf("Sortiert[%d]: ", i);
    for (int i = 0; i < 10; i++)
    {
      printf("%d, ", uebergabe_array[i]);
    }
    printf("\n");
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
