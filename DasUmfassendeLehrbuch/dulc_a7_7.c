#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void eigensort_einfach(int *uebergabe_array, int lenght)
{
  int index_min_wert = 0;
  int index_neg_wert = 0;
  int index_letzter_neg_wert = 0;
  bool neg_wert_gefunden = false;

  for (int i = 0; i < lenght-1; i++)
  {
    do{
      if (uebergabe_array[i] < 0)
      {
        index_letzter_neg_wert = i;
        neg_wert_gefunden = true;

      }
      else
      {
        /* code */
      }
    }while ((neg_wert_gefunden == false)&&);
  }

  for (int i = 0; i < lenght-1; i++)
  {
    for (int j = i+1; j < lenght; j++)
    {
      //printf("Bei i: %d und j: %d ist der Inhalt: %d und min: %d\n",i,j, uebergabe_array[j], min_zahl);
      if (uebergabe_array[j] < uebergabe_array[min_index])
      {
        min_index = j;
      }
      else
      {
        //Falls die Zahl größer ist, tue nichts. Wir suchen die kleinste Zahl.
      }
    }

  }
}

int main()
{
  int zahlen_array_eingabe[] = {8,0,4,1,3,9,100,4,75,77,-12,0,7,9,4,6,2,8,7,55,5,77,12,9,0};
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
