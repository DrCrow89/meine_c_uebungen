#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  int *array;
  int anzahl, index_mitte, spalte, zeile;
  int start = 1;

  do
  {
    printf("Wählt eine Quadratgröße aus 3, 5, 7, 9: ");
    scanf("%d", &anzahl);
  } while((anzahl != 3)&&(anzahl != 5)&&(anzahl != 7)&&(anzahl != 9));

  array = (int *)malloc(anzahl*sizeof(int));
  for(int j = 0; j < anzahl; j++)
  {
    for(int k = 0; k < anzahl; k++)
    {
      array[j+anzahl*k] = 0;
    }
  }

  index_mitte = anzahl/2;
  zeile = anzahl/2+1;
  spalte = anzahl/2;

  // 1. Bedingung
  array[zeile+anzahl*spalte] = 1;
  //array[index_mitte][index_mitte+1] = 1;

  // 2. Bedingung


  print_array_2d_format((int*)array, anzahl, anzahl);
  return 0;
}
