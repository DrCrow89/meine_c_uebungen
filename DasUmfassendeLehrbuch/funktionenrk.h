#ifndef FUNKTIONENRK_IMPORT
#define FUNKTIONENRK_IMPORT

/** \brief Funktion sortiert den Inhalt des uebergebene Array der Groesse nach aufsteigend nach dem Bubble-Sort-Algorithmus
 *
 * \param int *array
 * \param int lenght
 *
 */
void bubblesort(int *array, int lenght)
{
  int temp = 0;
  for (int i = 1; i < lenght; i++)
  {
    for (int j = 0; j < lenght - i; j++)
    {
      if (array[j] > array[j+1])
      {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

/** \brief Funktion gibt ein 2 dimensonales Array auf der Konsole aus mit Formatierung aus.
 *
 * \param int *array
 * \param int zeilen
 * \param int spalten
 *
 * Aufruf: print_array_2d_format((int*)array, 5, 5);
 */
void print_array_2d_format(int *array, int zeilen, int spalten)
{
  printf("2dArray:\n");
  for(int i = 0; i < zeilen; i++)
  {
    for(int j = 0; j < spalten; j++)
    {
      if(array[i+zeilen*j] <= 9)
      {
        printf("[00%d]", array[i+zeilen*j]);
      }
      else if(array[i+zeilen*j] <= 99)
      {
        printf("[0%d]", array[i+zeilen*j]);
      }
      else
      {
        printf("[%d]", array[i+zeilen*j]);
      }
    }
    printf("\n");
  }
}
void einesen_array_2d(int *array, int zeilen, int spalten)
{
  for(int i = 0; i < zeilen; i++)
  {
    for(int j = 0; j < spalten; j++)
    {
      printf("Inhalt für Array[%d][%d]: ", i, j);
      scanf("%d", &array[i+zeilen*j]);
    }
  }
}

#endif // FUNKTIONENRK_IMPORT
