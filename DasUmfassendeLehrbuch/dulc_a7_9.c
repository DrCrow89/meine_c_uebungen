#include <stdio.h>
#include <stdlib.h>

  int springer_zuege[8][2] = {
  //{Spalte, Zeile}
  {1, -2},
  {-2, 1},
  {2, -1},
  {2, 1},
  {1, 2},
  {-1, 2},
  {-2, -1},
  {-1, -2}
};

void print_schachbrett(int *uebergabe_schachbrett)
{
  // Bei einem Schachbrett gibt es immer nur ein 8x8 Spielfeld.
  //printf("+ 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 +\n");
  for(int zeilen = 0; zeilen < 8; zeilen++)
  {
    printf("+---+---+---+---+---+---+---+---+\n");
    for(int spalten = 0; spalten < 8; spalten++)
    {
      //printf("|%3d", uebergabe_schachbrett[spalten+8*zeilen]);
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

int springer_problem(int *schachbrett, int akt_zeile, int akt_spalte, int ziel_zeile, int ziel_spalte, int anzahl_aufruf)
{
  if (  (akt_zeile  <= 7)
      &&(akt_zeile  >= 0)
      &&(akt_spalte <= 7)
      &&(akt_spalte >= 0)
      &&(schachbrett[akt_spalte+8*akt_zeile] == -1)
     )
  {
    //printf("Erste if Bedingung mit Anzahl: %d\n", anzahl_aufruf);
    schachbrett[akt_spalte+8*akt_zeile] = anzahl_aufruf;
    if (  (akt_zeile == ziel_zeile)
        &&(akt_spalte == ziel_spalte)
       )
    {
      //printf("Zweite if Bedingung mit Anzahl: %d\n", anzahl_aufruf);
      return 1;
    }
    else
    {
      for (int zuege = 0; zuege <= 7; zuege++)
      {
        //printf("Aktuelles Feld[%d][%d]\n", akt_spalte, akt_zeile);
        //printf("Nächstes Feld[%d][%d]\n", akt_spalte+springer_zuege[zuege][1], akt_zeile+springer_zuege[zuege][0]);
        if (springer_problem((int*) schachbrett, akt_zeile+springer_zuege[zuege][0], akt_spalte+springer_zuege[zuege][1], ziel_zeile, ziel_spalte, anzahl_aufruf+1) == 1)
        {
          //printf("Dritte if Bedingung mit Anzahl: %d\n", anzahl_aufruf);
          return 1;
        }
      }
    }
  }
  else
  {
    return 0;
  }
}

int main()
{
  int schachbrett[8][8];
  int startfeld_zeile = 9; // später wieder auf 9 setzen
  int startfeld_spalte = 9; // später wieder auf 9 setzen
  int zielfeld_zeile = 9; // 1, 0, 1, 3, 5, 7, 6, 4, 2, 3, 6
  int zielfeld_spalte = 9; // 2, 4, 6, 7, 6, 7, 5, 6, 7, 5, 7

  for (int zeilen = 0; zeilen < 8; zeilen++)
  {
    for (int spalten = 0; spalten < 8; spalten++)
    {
      schachbrett[spalten][zeilen] = -1;
    }
  }

  //schachbrett[startfeld_zeile][startfeld_spalte] = 0; //Später wieder löschen
  //schachbrett[zielfeld_zeile][zielfeld_spalte] = 88;//Später wieder löschen

  while ((startfeld_zeile >= 9)||(startfeld_zeile <= 0)||(startfeld_spalte >= 9)||(startfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Startfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &startfeld_zeile, &startfeld_spalte);
  }
  //schachbrett[startfeld_zeile-1][startfeld_spalte-1] = 0;

  while ((zielfeld_zeile >= 9)||(zielfeld_zeile <= 0)||(zielfeld_spalte >= 9)||(zielfeld_spalte <= 0))
  {
    printf("Bitte geben Sie ein Zielfeld (Zeile Spalte) zwischen 1 und 8 an: ");
    scanf("%d %d", &zielfeld_zeile, &zielfeld_spalte);
  }
  //schachbrett[zielfeld_zeile-1][zielfeld_spalte-1] = 88;

  printf("Startfeld: [%d][%d]\n", startfeld_zeile, startfeld_spalte);
  printf("Zielfeld: [%d][%d]\n", zielfeld_zeile, zielfeld_spalte);
  springer_problem((int*)schachbrett, startfeld_zeile-1, startfeld_spalte-1, zielfeld_zeile-1, zielfeld_spalte-1, 0);
  //check_next_possible_field((int*)schachbrett, startfeld_zeile, startfeld_spalte,zielfeld_zeile, zielfeld_spalte, 0);
  print_schachbrett((int*)schachbrett);

  return 0;
}
