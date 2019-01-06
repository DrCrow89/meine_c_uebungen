#include <stdio.h>
#include <stdlib.h>

void print_schachbrett(int *array)
{
  // Bei einem Schachbrett gibt es immer nur ein 8x8 Spielfeld.

  for(int zeilen = 0; zeilen < 8; zeilen++)
  {
    printf("+---+---+---+---+---+---+---+---+\n");
    for(int spalten = 0; spalten < 8; spalten++)
    {
      if ((array[spalten+8*zeilen] >= 0)||(array[spalten+8*zeilen] == 88))
      {
        printf("|%3d", array[spalten+8*zeilen]);
      }
      else
      {
        printf("|   ");
      }
    }
    printf("|\n");
  }
  printf("+---+---+---+---+---+---+---+---+\n");
}

int main()
{
  int schachbrett[8][8];
  int startfeld_zeile = 0; // später wieder auf 9 setzen
  int startfeld_spalte = 0; // später wieder auf 9 setzen
  int zielfeld_zeile = 7;
  int zielfeld_spalte = 7;

  for (int zeilen = 0; zeilen < 8; zeilen++)
  {
    for (int spalten = 0; spalten < 8; spalten++)
    {
      schachbrett[spalten][zeilen] = -1;
    }
  }

  schachbrett[startfeld_zeile][startfeld_spalte] = 0; //Später wieder löschen
  schachbrett[zielfeld_zeile][zielfeld_spalte] = 88;//Später wieder löschen

  /*
  while ((startfeld_zeile >= 9)||(startfeld_zeile <= 0)||(startfeld_spalte >= 9)||(startfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Startfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &startfeld_zeile, &startfeld_spalte);
  }
  schachbrett[startfeld_zeile-1][startfeld_spalte-1] = 0;

  while ((zielfeld_zeile >= 9)||(zielfeld_zeile <= 0)||(zielfeld_spalte >= 9)||(zielfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Zielfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &zielfeld_zeile, &zielfeld_spalte);
  }
  schachbrett[zielfeld_zeile-1][zielfeld_spalte-1] = 88;
  */

  printf("Startfeld: [%d][%d]\n", startfeld_zeile+1, startfeld_spalte+1);
  printf("Zielfeld: [%d][%d]\n", zielfeld_zeile+1, zielfeld_spalte+1);
  print_schachbrett((int*)schachbrett);

  return 0;
}
