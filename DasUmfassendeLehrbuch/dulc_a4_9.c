#include <stdio.h>
#include <stdlib.h>
#include "mathrk.h"

int handler_menue()
{
  int eingabe = 0;
  printf("---------- Menue ----------\n");
  printf("Welche Funktion möchten Sie benutzen:\n");
  printf("1: Sinus\n");
  printf("2: Cosinus\n");
  printf("3: e-Funktion\n");
  printf("4: Ende\n");
  printf("-------------------------\n");
  printf("Eingabe: ");
  scanf("%d", &eingabe);
  return eingabe;
}

void berechne_sin()
{
  double winkel = 0.0;
  double ergebnis_sinus = 0.0;

  printf("Berechnung Sinus\n");
  printf("Eingabe Winkel [°]: ");
  scanf("%lf", &winkel);
  ergebnis_sinus = eigene_sin(umrechnung_winkel_in_bogenmass(winkel));
  printf("sin(%lf) = %lf\n", winkel, ergebnis_sinus);
}

void berechne_cos()
{
  double winkel = 0.0;
  double ergebnis_cosinus = 0.0;

  printf("Berechnung Cosinus\n");
  printf("Eingabe Winkel [°]: ");
  scanf("%lf", &winkel);
  ergebnis_cosinus = eigene_cos(umrechnung_winkel_in_bogenmass(winkel));
  printf("cos(%lf) = %lf\n", winkel, ergebnis_cosinus);
}

void berechne_exp()
{
  double exp_zahl = 0.0;
  double ergebnis_exp = 0.0;
  printf("Berechnung Exp\n");
  printf("Eingabe: ");
  scanf("%lf", &exp_zahl);
  ergebnis_exp = eigene_exp(exp_zahl);
  printf("e(power of x): %lf) = %lf\n", exp_zahl, ergebnis_exp);
}


int main()
{
  bool prog_start = true;

  while (prog_start)
  {
    int abfrage = handler_menue();
    switch(abfrage)
      {
        case 1: berechne_sin(); break;
        case 2: berechne_cos(); break;
        case 3: berechne_exp(); break;
        case 4: prog_start = false; break;
      }
  }
  return 0;
}
