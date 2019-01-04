#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main()
{
  int zahlen_array_eingabe[] = {8,0,4,1,3,9,100,4,75,77,12,0,7,9,4,6,2,8,7,55,5,77,12,9,0};
  int lenght = 25;

  printf("Unsortiert: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  eigensort(zahlen_array_eingabe, lenght);

  printf("Sortiert: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  return 0;
}
