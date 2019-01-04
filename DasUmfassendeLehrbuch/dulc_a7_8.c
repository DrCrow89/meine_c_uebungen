#include <stdio.h>
#include <stdlib.h>

void inhalt_array_umkehren(int *uebergabe_array, int lenght, int durchlauf)
{
  /* Erklärung:
    Bei jedem Durchlauf, muss ein neuer Wert zum Tauschen errechnet werden. Dieser wird aus der Arraygröße minus
    der Anzahl der Durchläufe (dies ist der Parameter, welcher sich bei jedem Selbstaufruf erhöht) gerechnet.
    -->
    array_anfang = Durchlauf
    array_ende = Arraygröße - 1(von Index Null aus gerechnet) - Durhlauf

    Abbruchbedingungen zum Selbstaufruf für gerade und ungerade Arraygrößen:
    0 --> 0,9
    1 --> 1,8
    2 --> 2,7
    3 --> 3,6
    4 --> 4,5
    5 --> 5,4 --> Ende
    --------
    1 --> 0,10
    2 --> 1,9
    3 --> 2,8
    4 --> 3,7
    5 --> 4,6
    6 --> 5,5
    7 --> 6,4 --> Ende
  */

  int array_anfang = durchlauf;
  int array_ende = lenght-1-durchlauf;
  printf("Aufruf mit Index: %d mit Angang: %d und dem Ende: %d\n", array_anfang, array_anfang, array_ende);

  int temp_inhalt_array_anfang = 0;
  if (array_anfang <= array_ende)
  {
    temp_inhalt_array_anfang = uebergabe_array[array_anfang];
    uebergabe_array[array_anfang] = uebergabe_array[array_ende];
    uebergabe_array[array_ende] = temp_inhalt_array_anfang;
    inhalt_array_umkehren(uebergabe_array, lenght, durchlauf + 1);
  }
  else
  {
    
  }
}

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
