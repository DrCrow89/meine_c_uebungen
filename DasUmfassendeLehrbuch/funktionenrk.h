#ifndef FUNKTIONENRK_IMPORT
#define FUNKTIONENRK_IMPORT
#include <stdbool.h>

/* Strings*/
struct array_string{ char inhalt_string[100]; };
char nullterm = '\0';

/* Strings*/

/** \brief Die Fuktion zählt die Anzahl der Buchstaben, welche in einem übergebenen Wort vorkommen.
 *
 * \param char *wort
 * \return int anzahl
 *
 */
int count_anzahl_buchstaben(char *wort)
{
  int anzahl = 0;
  while (wort[anzahl] != '\0')
  {
    anzahl++;
  }
  return anzahl;
}

/** \brief Die Fuktion zählt die Anzahl der Buchstaben, welche in einem übergebenen Wort vorkommen.
 *
 * \param char *wort
 * \param int uebergabe_buchstabe
 * \return int anzahl
 *
 */

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

struct array_string einlesen_string_in_array(void)
{
 int i;
 struct array_string wort;
 char eingabe_wort[100];
 printf("Bitte geben Sie ein Wort ein: ");
 fgets(eingabe_wort, 100, stdin);
 for(int j = 0; j <= count_anzahl_buchstaben((char*)eingabe_wort); j++)
 {
   wort.inhalt_string[j] = eingabe_wort[j];
 }
 return wort;
}

void ausgabe_string_in_array(struct array_string uebergabe_array)
{
  int i;
  for(i = 0; (i < sizeof(struct array_string) / sizeof(char))&&(uebergabe_array.inhalt_string[i] != nullterm); i++)
  {
    printf("%c", uebergabe_array.inhalt_string[i]);
  }
  printf("\n");
}

struct array_string init_buchstaben_in_array()
{
  struct array_string uebergabe_array;
  for(int i = 0; (i < sizeof(struct array_string) / sizeof(char)); i++)
  {
    uebergabe_array.inhalt_string[i] = '\0';
    //printf("Buchstabe: %c bei Index: %d\n", uebergabe_array.inhalt_string[i], i);
  }
  return uebergabe_array;
}

int count_groesse_in_array(struct array_string uebergabe_array)
{
  int zaehler = -1;
  for(int i = 0; (i < sizeof(struct array_string) / sizeof(char))&&(uebergabe_array.inhalt_string[i] != nullterm); i++)
  {
    //printf("Buchstabe Übergabe: %c bei Index: %d\n", uebergabe_array.inhalt_string[i], i);
    zaehler++;
  }
  //printf("Groesse: %d\n", zaehler);
  return zaehler;
}

struct array_string tausche_buchstaben_in_array(struct array_string uebergabe_array)
{
  struct array_string tausch_wort = init_buchstaben_in_array();
  int anzahl_buchstaben = count_groesse_in_array(uebergabe_array);
  int i, j;

  for(i = anzahl_buchstaben-1, j = 0; i >= 0; i--, j++)
  {
    tausch_wort.inhalt_string[i] = uebergabe_array.inhalt_string[j];
  }
  return tausch_wort;
}

struct array_string entferne_buchstabe_in_array(struct array_string uebergabe_array, char uebergabe_buchstabe)
{
  struct array_string neues_wort = init_buchstaben_in_array();
  int anzahl_buchstaben = count_groesse_in_array(uebergabe_array);
  int index_neues_wort = 0;

  for(int i = 0; i <= anzahl_buchstaben-1; i++)
  {
    //printf("Inhalt string[%d]: %c mit dem Vergleich des Buchstaben: %c \n",i, uebergabe_array.inhalt_string[i], uebergabe_buchstabe);
    if(uebergabe_array.inhalt_string[i] != uebergabe_buchstabe)
    {
      neues_wort.inhalt_string[index_neues_wort] = uebergabe_array.inhalt_string[i];
      index_neues_wort++;
    }
  }
  return neues_wort;
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
/** \brief Funktion sortiert den Inhalt des uebergebene Array der Groesse nach aufsteigend nach Tausch-Algorithmus.
 *
 * \param int *array
 * \param int lenght
 *
 */
void eigensort(int *uebergabe_array, int lenght)
{
  int min_index = 0;
  int temp_zahl = 0;

  for (int i = 0; i < lenght-1; i++)
  {
    min_index = i;
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
    temp_zahl = uebergabe_array[min_index];
    uebergabe_array[min_index] = uebergabe_array[i];
    uebergabe_array[i] = temp_zahl;
    /*
    printf("Sortiert[%d]: ", i);
    for (int i = 0; i < 10; i++)
    {
      printf("%d, ", uebergabe_array[i]);
    }
    printf("\n");
    */
  }
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
