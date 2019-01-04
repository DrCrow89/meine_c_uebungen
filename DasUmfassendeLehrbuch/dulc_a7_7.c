#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void eigensort_einfach(int *uebergabe_array, int lenght)
{
  int temp = 0;
  int index_min_wert = 0;
  int index_neg_wert = 0;
  int index_letzter_neg_wert = -1;
  int index_letzter_pos_wert = 0;

  bool pos_wert_gefunden = false;
  int zaehler = 0;

    do{
      if (uebergabe_array[zaehler] >= 0)
      {
        index_letzter_pos_wert = zaehler;
        pos_wert_gefunden = true;
      }
      else
      {

      }
      zaehler++;
    }while ((pos_wert_gefunden == false)&&(zaehler < lenght-1));

  for (int i = index_letzter_pos_wert; i < lenght-1; i++)
  {
    if(uebergabe_array[i] < 0)
    {
      temp = uebergabe_array[index_letzter_pos_wert];
      uebergabe_array[index_letzter_pos_wert] = uebergabe_array[i];
      uebergabe_array[i] = temp;
      index_letzter_pos_wert++;
    }
  }
}

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
