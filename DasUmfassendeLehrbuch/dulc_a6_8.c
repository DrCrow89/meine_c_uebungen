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
  int array[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
  //int array[5][5];
  //einlesen_array5x5(array);
  print_array5x5(array);
  print_array_2d_format((int*)array, 5, 5);

  return 0;
}
