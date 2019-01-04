#include <stdio.h>
#include <stdlib.h>
#include "funktionenrk.h"

int main()
{
  //int zahlen_array_eingabe[] = {8,0,4,1,3,9,100,4,75,77,12,0,7,9,4,6,2,8,7,55,5,77,12,9,0};
  int zahlen_array_eingabe[] = {8,0,4,1,3,9,100,4,75,77,99};
  int lenght = 11;

  printf("Start: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  inhalt_array_umkehren(zahlen_array_eingabe, lenght, lenght-lenght);

  printf("Ende: ");
  for (int i = 0; i < lenght; i++)
  {
    printf("%d, ", zahlen_array_eingabe[i]);
  }
  printf("\n");

  return 0;
}
