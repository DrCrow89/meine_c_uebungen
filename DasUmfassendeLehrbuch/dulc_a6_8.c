#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  int array[5][5] = {{ 19,  3, 12, 21, 10},
                     { 11, 25,  9, 18,  2},
                     {  8, 17,  1, 15, 24},
                     {  5, 17, 23,  7, 16},
                     { 22,  6, 20,  4, 13}};
  int vergleichswert = 65;
  int tempSumme = 0;

  print_array_2d_format((int*)array, 5, 5);
  if(pruefe_magisches_quadrat((int*)array, 5, 5, 65))
  {
    printf("Es ist magisch\n");
  }
  else
  {
    printf("Es ist nicht magisch\n");
  }

  return 0;
}
