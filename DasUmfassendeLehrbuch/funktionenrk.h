#ifndef FUNKTIONENRK_IMPORT
#define FUNKTIONENRK_IMPORT
#include <stdbool.h>

/* Strings*/
int count_anzahl_buchstaben(char *wort)
{
  int anzahl = 0;
  while (wort[anzahl] != '\0')
  {
    anzahl++;
  }
  return anzahl;
}

int count_buchstaben(char *wort, char uebergabe_buchstabe)
{
  int anzahl_buchstaben = count_anzahl_buchstaben((char*)wort);
  int anzahl = 0;

  for(int j = 0; j <= anzahl_buchstaben; j++)
  {
    if(wort[j] == uebergabe_buchstabe)
    {
      anzahl++;
    }
  }
  return anzahl;
}

/* Magische Quadrate */
/** \brief Die Fuktion gibt die magische Zahl von einem magisches Quadrat zurück
 *
 * \param int zeilen_oder_spalten
 * \return int magische_zahl
 *
 */
int get_magische_zahl(int uebergabe_zeilen_spalten)
{
  return uebergabe_zeilen_spalten*(uebergabe_zeilen_spalten*uebergabe_zeilen_spalten+1)/2;
}

/** \brief Die Fuktion prüft, ob das übergebne Quadrat ein magisches Quadrat ist
 *
 * \param int *array
 * \param int zeilen
 * \param int Spalten
 * \param int magische_zahl
 * \return bool rueckgabe
 *
 * Aufruf: pruefe_magisches_quadrat((int*)array, 5, 5, 65)
 */
bool pruefe_magisches_quadrat(int *array, int zeilen, int spalten)
{
    bool rueckgabe = true;
    int tempSumme;
    int magische_zahl = get_magische_zahl(zeilen);

    // Prüfen der Zeilen
    for(int i = 0; i < zeilen; i++)
    {
      tempSumme = 0;
      for(int j = 0; j < spalten; j++)
      {
        tempSumme = tempSumme + array[i+zeilen*j];
      }
      if(tempSumme != magische_zahl)
      {
        rueckgabe = rueckgabe&&false;
      }
      //printf("Zeile: %d == magische Zahl: %d\n", tempSumme, magische_zahl);
    }
    // Prüfen der Spalten
    for(int i = 0; i < zeilen; i++)
    {
      tempSumme = 0;
      for(int j = 0; j < spalten; j++)
      {
        tempSumme = tempSumme + array[j+zeilen*i];
      }
      if(tempSumme != magische_zahl)
      {
        rueckgabe = rueckgabe&&false;
      }
      //printf("Spalte: %d == magische Zahl: %d\n", tempSumme, magische_zahl);
    }
    // Prüfen der Diagonale 1
    tempSumme = 0;
    for(int i = 0; i < zeilen; i++)
    {
      tempSumme = tempSumme + array[i+zeilen*i];
    }
    if(tempSumme != magische_zahl)
    {
      rueckgabe = rueckgabe&&false;
    }
    //printf("Dia 1: %d == magische Zahl: %d\n", tempSumme, magische_zahl);
    // Prüfen der Diagonale 2
    tempSumme = 0;
    for(int i = 0, j = spalten-1; i < zeilen; i++, j--)
    {
      tempSumme = tempSumme + array[j+zeilen*i];
    }
    if(tempSumme != magische_zahl)
    {
      rueckgabe = rueckgabe&&false;
    }
    //printf("Dia 2: %d == magische Zahl: %d\n", tempSumme, magische_zahl);
    return rueckgabe;
}

/* Sortieren */
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

/* Ein- Ausgaben */
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
  for(int i = 0; i < zeilen; i++)
  {
    for(int j = 0; j < spalten; j++)
    {
      printf("[%3d]", array[i+zeilen*j]);
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
