#include <stdio.h>
#include <stdlib.h>

  int springer_zuege[8][2] = {
  //{Spalte, Zeile}
  {1, -2},
  {2, -1},
  {2, 1},
  {1, 2},
  {-1, 2},
  {-2, 1},
  {-2, -1},
  {-1, -2}
};

int check_next_possible_field(int *uebergabe_schachbrett, int uebergabe_akt_zeile, int uebergabe_akt_spalte, int ziel_zeile, int ziel_spalte, int aufruf_anzahl)
{
  aufruf_anzahl = aufruf_anzahl + 1;
  for (int zuege = 0; zuege < 8; zuege++)
  {
    //uebergabe_schachbrett[spalten+8*zeilen]
    //printf("Möglicher Zug[%d]: Zeile(%d) Spalte(%d)\n", zuege, springer_zuege[zuege][1], springer_zuege[zuege][0]);
    if (  ((uebergabe_akt_zeile+springer_zuege[zuege][1])  <= 7)
        &&((uebergabe_akt_zeile+springer_zuege[zuege][1])  >= 0)
        &&((uebergabe_akt_spalte+springer_zuege[zuege][0]) <= 7)
        &&((uebergabe_akt_spalte+springer_zuege[zuege][0]) >= 0)
       )
    {
      uebergabe_akt_zeile  = uebergabe_akt_zeile  + springer_zuege[zuege][1];
      uebergabe_akt_spalte = uebergabe_akt_spalte + springer_zuege[zuege][0];
      //printf("Mögliche Zeile(%d) und Spalte(%d)\n", (uebergabe_akt_zeile+springer_zuege[zuege][1]), (uebergabe_akt_spalte+springer_zuege[zuege][0]));
      printf("Die akuelle Koordinaten[%d][%d] und die Zielkoordinaten[%d][%d] und die Aufrufnummer: %d\n", uebergabe_akt_zeile, uebergabe_akt_spalte, ziel_zeile, ziel_spalte, aufruf_anzahl);
      uebergabe_schachbrett[uebergabe_akt_spalte+8*uebergabe_akt_zeile] = aufruf_anzahl;
      if ((uebergabe_akt_zeile == ziel_zeile)&&(uebergabe_akt_spalte == ziel_spalte))
      {
        return 0;
      }
      else if (aufruf_anzahl == 2)
      {
        return 0;
      }
      else
      {
        printf("Die akuelle Koordinaten[%d][%d] und die Zielkoordinaten[%d][%d] und die Aufrufnummer: %d\n", uebergabe_akt_zeile, uebergabe_akt_spalte, ziel_zeile, ziel_spalte, aufruf_anzahl);
        check_next_possible_field((int*)uebergabe_schachbrett, uebergabe_akt_zeile, uebergabe_akt_spalte, ziel_zeile, ziel_spalte, aufruf_anzahl);
      }
    }
    else
    {
      //printf("Keine mögliche Zeile(%d) und Spalte(%d)\n", (uebergabe_akt_zeile+springer_zuege[zuege][1]), (uebergabe_akt_spalte+springer_zuege[zuege][0]));
    }
  }
}

void print_schachbrett(int *uebergabe_schachbrett)
{
  // Bei einem Schachbrett gibt es immer nur ein 8x8 Spielfeld.

  for(int zeilen = 0; zeilen < 8; zeilen++)
  {
    printf("+---+---+---+---+---+---+---+---+\n");
    for(int spalten = 0; spalten < 8; spalten++)
    {
      if ((uebergabe_schachbrett[spalten+8*zeilen] >= 0)||(uebergabe_schachbrett[spalten+8*zeilen] == 88))
      {
        printf("|%3d", uebergabe_schachbrett[spalten+8*zeilen]);
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
  int zielfeld_zeile = 0;
  int zielfeld_spalte = 4;

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
  check_next_possible_field((int*)schachbrett, startfeld_zeile, startfeld_spalte,zielfeld_zeile, zielfeld_spalte, 0);
  print_schachbrett((int*)schachbrett);

  return 0;
}
