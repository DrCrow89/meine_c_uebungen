#include <stdio.h>
#include <stdlib.h>
#include "mathrk.h"

int main()
{
    bool testBool = false;

    if (testBool == true)
    {
        float basisX = 0;
        int potenzX = 0;
        float ergebnis = 0;
        printf("Berechnung Potenz\n");
        printf("Eingabe Basis: ");
        scanf("%f", &basisX);
        printf("Eingabe Potenz: ");
        scanf("%d", &potenzX);
        ergebnis = potenz(basisX,potenzX);
        printf("Ergebnis: %f\n",ergebnis);

        int zahl = 0;
        printf("Berechnung Fakultaet\n");
        printf("Eingabe Zahl: ");
        scanf("%d",&zahl);
        ergebnis = fakultaet(zahl);
        printf("Ergebnis: %f\n",ergebnis);

        float winkel = 0.0;
        float ergebnis_winkel = 0.0;
        float bogenmass = 0.0;
        float ergebnis_bogenmass = 0.0;

        printf("Berechnung Bogenmass\n");
        printf("Eingabe Zahl: ");
        scanf("%f", &winkel);
        ergebnis_winkel = umrechnung_winkel_in_bogenmass(winkel);
        printf("Ergebnis: %f\n", ergebnis_winkel);

        printf("Berechnung Winkel\n");
        printf("Eingabe Zahl: ");
        scanf("%f", &bogenmass);
        ergebnis_bogenmass = umrechnung_bogenmass_in_winkel(bogenmass);
        printf("Ergebnis: %f\n", ergebnis_bogenmass);

        int zahl2 = 0;
        printf("Pruefung ob gerade\n");
        printf("Eingabe Zahl: ");
        scanf("%d", &zahl2);
        if (check_gerade_zahl(zahl2) == true)
        {
            printf("Die Zahl ist gerade!\n");
        }
        else
        {
            printf("Die Zahl ist nicht gerade!\n");
        }
    }

    while (true)
    {
        double exp_zahl = 0.0;
        double ergebnis_exp = 0.0;
        printf("Berechnung Exp\n");
        printf("Eingabe: ");
        scanf("%lf", &exp_zahl);
        ergebnis_exp = eigene_exp(exp_zahl);
        printf("e(power of x): %lf) = %lf\n", exp_zahl, ergebnis_exp);

        double winkel = 0.0;
        double ergebnis_cosinus = 0.0;
        double ergebnis_sinus = 0.0;

        printf("Berechnung Cosinus/Sinus\n");
        printf("Eingabe Winkel [°]: ");
        scanf("%lf", &winkel);
        ergebnis_cosinus = eigene_cos(umrechnung_winkel_in_bogenmass(winkel));
        ergebnis_sinus = eigene_sin(umrechnung_winkel_in_bogenmass(winkel));
        printf("cos(%lf) = %lf\n", winkel, ergebnis_cosinus);
        printf("sin(%lf) = %lf\n", winkel, ergebnis_sinus);
    }

    return 0;
}
