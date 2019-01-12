#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

  int springer_zuege[8][2] = {
  //{Spalte, Zeile}
  /* Mit dieser Kombination sind nicht alle Felder erreichbar
  {1, -2},
  {-2, 1},
  {2, -1},
  {2, 1},
  {1, 2},
  {-1, 2},
  {-2, -1},
  {-1, -2}
  */
  {-1, 2},
  {-2, -1},
  {-1, -2},
  {1, -2},
  {-2, 1},
  {2, -1},
  {2, 1},
  {1, 2}
};

void init_schachbrett(int *uebergabe_schachbrett)
{
  for (int zeilen = 0; zeilen < 8; zeilen++)
  {
    for (int spalten = 0; spalten < 8; spalten++)
    {
      uebergabe_schachbrett[spalten+8*zeilen] = -1;
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
      //printf("|%3d", uebergabe_schachbrett[spalten+8*zeilen]);
      if (uebergabe_schachbrett[spalten+8*zeilen] >= 0)
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
    //printf("Erste Bedingung mit Anzahl: %d\n", anzahl_aufruf);
    schachbrett[akt_spalte+8*akt_zeile] = anzahl_aufruf;
    if (  (akt_zeile == ziel_zeile)
        &&(akt_spalte == ziel_spalte)
       )
    {
      return 1;
    }
    else
    {
      for (int zuege = 0; zuege <= 7; zuege++)
      {
        if (springer_problem((int*) schachbrett, akt_zeile+springer_zuege[zuege][0], akt_spalte+springer_zuege[zuege][1], ziel_zeile, ziel_spalte, anzahl_aufruf+1) == 1)
        {
          return 1;
        }
        else
        {
          /* Tue nichts, wenn der aktuelle Weg keinen Erfolg hat */
        }
      }
      schachbrett[akt_spalte+8*akt_zeile] = -1;
      return 0;
    }
  }
  else
  {
    return 0;
  }
}

int handler_menue()
{
  int eingabe = 0;
  printf("---------- Menü Springerproblem----------\n");
  printf("Welche Funktion möchten Sie benutzen:\n");
  printf("1: Manuelle Eingabe\n");
  printf("2: Springerproblem Autotest\n");
  printf("3: Ende\n");
  printf("-----------------------------------------\n");
  printf("Eingabe: ");
  scanf("%d", &eingabe);
  return eingabe;
}

int main()
{
  int schachbrett[8][8];
  int startfeld_zeile = 9;
  int startfeld_spalte = 9;
  int zielfeld_zeile = 9;
  int zielfeld_spalte = 9;

  bool prog_start = true;

  while (prog_start)
  {
    int abfrage = handler_menue();
    switch(abfrage)
    {
        case 1:
        {
          startfeld_zeile = 9;
          startfeld_spalte = 9;
          zielfeld_zeile = 9;
          zielfeld_spalte = 9;
          init_schachbrett((int*)schachbrett);

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
          springer_problem((int*)schachbrett, startfeld_zeile-1, startfeld_spalte-1, zielfeld_zeile-1, zielfeld_spalte-1, 0);
          print_schachbrett((int*)schachbrett);
          break;
        }

        case 2:
        {
          int test_anzahl = 1;
          for(int test_start_zeile = 1; test_start_zeile <= 8; test_start_zeile++)
          {
            for (int test_start_spalte = 1; test_start_spalte <= 8; test_start_spalte++)
            {
              for (int test_ziel_zeile = 1; test_ziel_zeile <= 8; test_ziel_zeile++)
              {
                for (int test_ziel_spalte = 1; test_ziel_spalte <= 8; test_ziel_spalte++)
                {
                  init_schachbrett((int*)schachbrett);
                  printf("Test: %d mit Startfeld: [%d][%d] und Zielfeld: [%d][%d]\n", test_anzahl, test_start_zeile, test_start_spalte, test_ziel_zeile, test_ziel_spalte);
                  springer_problem((int*)schachbrett, test_start_zeile-1, test_start_spalte-1, test_ziel_zeile-1, test_ziel_spalte-1, 0);
                  //print_schachbrett((int*)schachbrett);
                  test_anzahl++;
                }
              }
            }
          }
          break;
        }
        case 3:
        {
          prog_start = false;
          break;
        }
      }
  }
  return 0;
}
