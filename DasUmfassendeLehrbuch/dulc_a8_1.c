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

void berechne_min_max_average(float *uebergabe_array, int uebergabe_groesse, float *uebergabe_min, float *uebergabe_max, float *uebergabe_ave)
{
  float temp_average = uebergabe_array[0];
  *uebergabe_min = uebergabe_array[0];
  *uebergabe_max = uebergabe_array[0];

  for (int i = 1; i < uebergabe_groesse; i++)
  {
    if (*uebergabe_min > uebergabe_array[i])
    {
      *uebergabe_min = uebergabe_array[i];
    }
    if (*uebergabe_max < uebergabe_array[i])
    {
      *uebergabe_max = uebergabe_array[i];
    }
    temp_average = temp_average + uebergabe_array[i];
  }
  *uebergabe_ave = temp_average/uebergabe_groesse;
}

int main()
{
  float *array_float_zahlen;
  int groesse;
  float eingabe, minimal, maximal, average;

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
  berechne_min_max_average((float*) array_float_zahlen, groesse, &minimal, &maximal, &average);
  printf("Min: %f, Max: %f, Average: %f\n", minimal, maximal, average);
  return 0;
}
