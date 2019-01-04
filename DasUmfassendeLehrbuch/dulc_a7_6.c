#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main()
{
  int zahlen_array_eingabe[] = {1,3,9,0,4,6,2,8,7,55};

  printf("Unsortiert: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  eigensort(zahlen_array_eingabe, 10);

  printf("Sortiert: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  return 0;
}
