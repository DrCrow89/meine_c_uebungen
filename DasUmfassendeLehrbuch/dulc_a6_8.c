#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

void print_array5x5(int array[5][5])
{
  printf("2Array:\n");
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      if(array[i][j] <= 9)
      {
        printf("[0%d]", array[i][j]);
      }
      else
      {
        printf("[%d]", array[i][j]);
      }
    }
    printf("\n");
  }
}

void einlesen_array5x5(int array[5][5])
{
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      printf("Inhalt für Array[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
}

int main()
{
  int array[5][5] = {{ 19,  3, 12, 21, 10},
                     { 11, 25,  9, 18,  2},
                     {  8, 17,  1, 15, 24},
                     {  5, 14, 23,  7, 16},
                     { 22,  6, 20,  4, 13}};
  int vergleichswert = 65;
  int tempSumme = 0;

  //int array[5][5];
  //einlesen_array5x5(array);
  //print_array5x5(array);
  //print_array_2d_format((int*)array, 5, 5);

  // Prüfen der Zeilen
  for(int i = 0; i < 5; i++)
  {
    tempSumme = 0;
    for(int j = 0; j < 5; j++)
    {
      tempSumme = tempSumme + array[i][j];
    }
    if(tempSumme != vergleichswert)
    {
      printf("Die Summe in Zeile %d ist ungleich %d\n",i+1 , vergleichswert);
    }
  }
  // Prüfen der Spalten
  for(int i = 0; i < 5; i++)
  {
    tempSumme = 0;
    for(int j = 0; j < 5; j++)
    {
      tempSumme = tempSumme + array[j][i];
    }
    if(tempSumme != vergleichswert)
    {
      printf("Die Summe in Spalte %d ist ungleich %d\n",i+1 , vergleichswert);
    }
  }
  // Prüfen der Diagonale 1
  tempSumme = 0;
  for(int i = 0; i < 5; i++)
  {
    tempSumme = tempSumme + array[i][i];
  }
  if(tempSumme != vergleichswert)
  {
    printf("Die Summe der Diagonalen 1 ist ungleich %d. Sie ist %d \n",vergleichswert, tempSumme);
  }

  // Prüfen der Diagonale 2
  tempSumme = 0;
  for(int i = 0, j = 4; i < 5; i++, j--)
  {
    tempSumme = tempSumme + array[j][i];
  }
  if(tempSumme != vergleichswert)
  {
    printf("Die Summe der Diagonalen 2 ist ungleich %d. Sie ist %d \n",vergleichswert, tempSumme);
  }

  return 0;
}
