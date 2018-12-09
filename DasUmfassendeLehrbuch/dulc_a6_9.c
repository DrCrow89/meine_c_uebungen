#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  int *array;
  int groesse, index_mitte, spalte, zeile, dimension;
  int start = 1;
  int inhalt = 2;
  int o = 2;

  do
  {
    printf("Wählt eine Quadratgröße aus 3, 5, 7, 9: ");
    scanf("%d", &groesse);
  } while((groesse != 3)&&(groesse != 5)&&(groesse != 7)&&(groesse != 9));

  array = (int *)malloc(groesse*sizeof(int));
  for(int j = 0; j < groesse; j++)
  {
    for(int k = 0; k < groesse; k++)
    {
      array[j+groesse*k] = 0;
    }
  }

  index_mitte = groesse/2;
  zeile = groesse/2+1;
  spalte = groesse/2;
  dimension = groesse*groesse;

  // 1. Bedingung
  array[zeile+groesse*spalte] = 1;
  //array[index_mitte][index_mitte+1] = 1;

    for (size_t index_zeilen = 0; index_zeilen < groesse; index_zeilen++)
    {
      for (size_t index_spalten = 0; index_spalten < groesse; index_spalten++)
      {
        printf("Array[%d][%d]: %d\n",index_zeilen, index_spalten, o );
        array[index_zeilen+groesse*index_spalten] = o;
      }
    }

  print_array_2d_format((int*)array, groesse, groesse);
  if(pruefe_magisches_quadrat((int*)array, groesse, groesse, dimension))
  {
    printf("Es ist magisch\n");
  }
  else
  {
    printf("Es ist nicht magisch\n");
  }
  return 0;
}
