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
  int temp = 0;

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
  zeile++;
  spalte++;
  //array[index_mitte][index_mitte+1] = 1;
  printf("[%d]Startzeile: %d und Spalte: %d und Inhalt[%d][%d] = %d\n", o, zeile, spalte, zeile, spalte, array[zeile+groesse*spalte]);

  while (o <= dimension)
  {
    printf("[%d]Startzeile: %d und Spalte: %d\n", o, zeile, spalte);
    if(zeile < groesse)
    {
      //printf("zeile: %d und spalte: %d\n", zeile, spalte);
      if(spalte < groesse)
      {
        if(array[zeile+groesse*spalte] == 0)
        {
          printf("[%d]Neuezeile: %d und Spalte: %d\n", o, zeile, spalte);
          array[zeile+groesse*spalte] = o;
          //printf("Inhalt: %d\n", array[zeile+groesse*spalte]);
          zeile++;
          spalte++;
          o++;
        }
        else
        {
          zeile = zeile -1;
          spalte = spalte -1;
          zeile = zeile + 2;
          if(zeile < 0)
          {
            zeile = 0;
          }
          if(spalte < 0)
          {
            spalte = 0;
          }
        }
      }
      else
      {
        spalte = 0;
      }
    }
    else
    {
      zeile = 0;
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
