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
  int array[5][5] = {{ 1, 2, 3, 4, 5},
                     { 6, 7, 8, 9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25}};
  int vergleichswert = 25;
  int summen_ok = 0;
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
      //printf("Die Summe in Zeile %d ist ungleich %d\n",i+1 , vergleichswert);
      summen_ok++;
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
      //printf("Die Summe in Spalte %d ist ungleich %d\n",i+1 , vergleichswert);
      summen_ok++;
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
    //printf("Die Summe der Diagonalen 1 ist ungleich %d. Sie ist %d \n",vergleichswert, tempSumme);
    summen_ok++;
  }

  // Prüfen der Diagonale 2
  tempSumme = 0;
  for(int i = 0, j = 4; i < 5; i++, j--)
  {
    tempSumme = tempSumme + array[j][i];
  }
  if(tempSumme != vergleichswert)
  {
    //printf("Die Summe der Diagonalen 2 ist ungleich %d. Sie ist %d \n",vergleichswert, tempSumme);
    summen_ok++;
  }

  if(tempSumme == 0)
  {
    printf("Die Summe in den Zeilen und Spalten sowie die beide Diagonalen betragen jeweils %d\n", vergleichswert);
  }
  else
  {
    printf("Die Summe in den Zeilen und Spalten sowie die beide Diagonalen betragen jeweils nicht %d\n", vergleichswert);
  }
  return 0;
}
