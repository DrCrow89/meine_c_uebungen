#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  int *array;
  int groesse, spalte, zeile, dimension;
  int inhalt = 2;

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

  zeile = groesse/2+1;
  spalte = groesse/2;
  dimension = groesse*groesse;

  // 1. Regel
  array[zeile+groesse*spalte] = 1;
  zeile++;
  spalte++;

  while (inhalt <= dimension)
  {
      // 2. Regel
    if ((array[zeile+groesse*spalte] == 0)&&(zeile >= 0)&&(zeile < groesse)&&(spalte >= 0)&&(spalte < groesse))
    {
      array[zeile+groesse*spalte] = inhalt;
      zeile++;
      spalte++;
      inhalt++;
      //print_array_2d_format((int*)array, groesse, groesse);
    }
      // 4. Regel
    while ((inhalt <= dimension)&&((array[zeile+groesse*spalte] != 0)||(zeile < 0)||(zeile >= groesse)||(spalte < 0)||(spalte >= groesse)))
    {
      //printf("Wert: %d/ Zeile: %d/ Spalte: %d/ lala: %d\n", o, zeile, spalte, lala);
      if(zeile < 0)
      {
        zeile = groesse-1;
      }
      else if(zeile >= groesse)
      {
        zeile = 0;
      }
      else
      {
        /* Zeile ist in den Grenzen */
      }
      if(spalte < 0)
      {
        spalte = groesse-1;
      }
      else if(spalte >= groesse)
      {
        spalte = 0;
      }
      else
      {
        /* Spalte ist in den Grenzen */
      }

        // 3. Regel
      if(array[zeile+groesse*spalte] != 0)
      {
        zeile++;
        spalte--;
      }
    }
  }

  print_array_2d_format((int*)array, groesse, groesse);
  if(pruefe_magisches_quadrat((int*)array, groesse, groesse))
  {
    printf("Es ist magisch\n");
  }
  else
  {
    printf("Es ist nicht magisch\n");
  }
  return 0;
}
