#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  int zahlen_array_eingabe[] = {-5,2,1,-3,0,-2,4,-4,-1,3,5};
  int lenght = 11;

  printf("Unsortiert: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  eigensort_einfach(zahlen_array_eingabe, lenght);

  printf("Sortiert: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  return 0;
}
