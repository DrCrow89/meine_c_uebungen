#include <stdio.h>
#include <stdlib.h>

void print_array_float_zahlen(float *uebergabe_array, int uebergabe_groesse)
{
  printf("Inhalt des Arrays: ");
  for (int i = 0; i < uebergabe_groesse; i++)
  {
    printf("%f, ", uebergabe_array[i]);
  }
  printf("\n");
}

int main()
{
  float *array_float_zahlen;
  int groesse;
  float eingabe;

  {
    printf("Wie viele Float-Zahlen sollen in das Array geschrieben werden? Eingabe: ");
    scanf("%d", &groesse);
  } while(groesse <= 0);

  array_float_zahlen = (float *)malloc(groesse*sizeof(float));

  for (int i = 0; i < groesse; i++)
  {
    printf("Bitte die %d. Zahl eingeben: ", i+1);
    scanf("%f", &eingabe);
    array_float_zahlen[i] = eingabe;
  }
  print_array_float_zahlen((float*) array_float_zahlen, groesse);
  return 0;
}
