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
#endif // FUNKTIONENRK_IMPORT
