#include <stdio.h>
#include <stdlib.h>

void print_schachbrett(int *array)
{
  // Bei einem Schachbrett gibt es immer nur ein 8x8 Spielfeld.
  int spalten = 8;
  int zeilen = 8;

  for(int i = 0; i < zeilen; i++)
  {
    printf("+---+---+---+---+---+---+---+---+\n");
    for(int j = 0; j < spalten; j++)
    {
      printf("|%3d", array[i+zeilen*j]);
    }
    printf("|\n");
  }
  printf("+---+---+---+---+---+---+---+---+\n");
}

int main()
{
  int schachbrett[8][8] = {0};
  int startfeld_zeile = 9;
  int startfeld_spalte = 9;
  int zielfeld_zeile = 9;
  int zielfeld_spalte = 9;

  while ((startfeld_zeile >= 9)||(startfeld_zeile <= 0)||(startfeld_spalte >= 9)||(startfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Startfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &startfeld_zeile, &startfeld_spalte);
  }

  while ((zielfeld_zeile >= 9)||(zielfeld_zeile <= 0)||(zielfeld_spalte >= 9)||(zielfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Zielfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &zielfeld_zeile, &zielfeld_spalte);
  }

  printf("Startfeld: [%d][%d]\n", startfeld_zeile, startfeld_spalte);
  printf("Zielfeld: [%d][%d]\n", zielfeld_zeile, zielfeld_spalte);
  print_schachbrett((int*)schachbrett);

  return 0;
}
