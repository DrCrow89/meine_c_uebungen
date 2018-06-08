
#ifndef MATHRK_H_INCLUDED
#define MATHRK_H_INCLUDED
#include <stdbool.h>
#include <math.h>

/** \brief Funktion prüft ob die übergebe Zahl eine Primzahl ist
 *
 * \param int uebergabe
 * \return bool rueckgabe
 *
 */
bool checkPrimzahl(int uebergabe)
{
    bool rueckgabe = true;
    for(int i = 2; i<uebergabe; i++ )
    {
        if(uebergabe%i == 0)
        {
            return rueckgabe = false;
        }
    }
    return rueckgabe;
}

bool check_gerade_zahl(int uebergabe)
{
    if(uebergabe%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double fakultaet(int uebergabe)
{
    double fakultaet = 1;
    for(int i = 1; i<=uebergabe; i++)
    {
        fakultaet = fakultaet*i;
    }
    //printf("-----> Fakultaet: Uebergabe: %d / Rueckgabe: %d\n", uebergabe, fakultaet);
    return fakultaet;
}

double potenz(double basis, int potenz)
{
    //printf("Uebergebene Basis: %f\n", basis);
    //printf("Uebergebene Potenz: %d\n",potenz);

    if(potenz == 0)
    {
        return 1;
    }
    else
    {
        double ergebnis = basis;
        double ergebnisOld = 0;
        for(int i = 1; i<potenz; i++)
        {
            ergebnisOld = ergebnis;
            ergebnis = ergebnis * basis;
        }
        return ergebnis;
    }
}

double umrechnung_winkel_in_bogenmass(double uebergabeWinkel)
{
    return ((2*M_PI)/360)*uebergabeWinkel;
}

double umrechnung_bogenmass_in_winkel(double uebergabeBogenmass)
{
    return (360/(2*M_PI))*uebergabeBogenmass;
}

double eigene_sin(double uebergabe_winkel)
{
    int zaehler = 0;
    double ergebnis = 0.0;
    double ergebnis_temp = 0.0;

    for(int schleife = 0; schleife < 50; schleife++)
    {
        zaehler = (2*schleife)+1;
        //printf("Zaehler: %d\n",zaehler);
        ergebnis_temp = potenz(-1,schleife) * (potenz(uebergabe_winkel, zaehler)/fakultaet(zaehler));
        //printf("%lf = %lf * (%lf / %lf)\n",ergebnis_temp,potenz(-1,schleife),potenz(uebergabe_winkel, zaehler),fakultaet(zaehler));
        //printf("%lf = %lf + %lf\n",ergebnis + ergebnis_temp, ergebnis,ergebnis_temp);
        ergebnis = ergebnis + ergebnis_temp;
    }
    return ergebnis;
}

double eigene_cos(double uebergabe_winkel)
{
    int zaehler = 0;
    double ergebnis = 0.0;
    double ergebnis_temp = 0.0;
    //printf("Bogenmass: %lf\n", uebergabe_winkel);

    for(int schleife = 0; schleife < 50; schleife++)
    {
        zaehler = 2*schleife;
        //printf("Zaehler: %d / Pot: %lf / Fak: %lf\n",zaehler,potenz(uebergabe_winkel, zaehler),fakultaet(zaehler));
        ergebnis_temp = potenz(-1,schleife) * (potenz(uebergabe_winkel, zaehler)/fakultaet(zaehler));
        //printf("%lf = %lf * (%lf / %lf) mit Zaehler: %d\n",ergebnis_temp,potenz(-1,schleife),potenz(uebergabe_winkel, zaehler),fakultaet(zaehler), zaehler);
        //printf("%lf = %lf + %lf\n",ergebnis + ergebnis_temp, ergebnis,ergebnis_temp);
        ergebnis = ergebnis + ergebnis_temp;
    }
    return ergebnis;
}

double eigene_exp(double uebergabe_zahl)
{
    double ergebnis = 0.0;
    double ergebnis_temp = 0.0;
    printf("Uebergabe: %lf\n", uebergabe_zahl);

    for(int schleife = 0; schleife < 50; schleife++)
    {
        ergebnis_temp = potenz(uebergabe_zahl, schleife)/fakultaet(schleife);
        //printf("%lf = (%lf / %lf) mit Zaehler: %d\n",ergebnis_temp,potenz(uebergabe_zahl, schleife),fakultaet(schleife),schleife);
        ergebnis = ergebnis + ergebnis_temp;
    }
    return ergebnis;
}

int eigeneSumme(int start_zahl, int end_zahl)
{
    int ergebnis = 0;
    if(start_zahl < end_zahl)
    {
        for(;start_zahl <= end_zahl; start_zahl++)
        {
            ergebnis = ergebnis + start_zahl;
        }
        return ergebnis;
    }
    else
    {
        return -1;
    }
}

#endif // MATHRK_H_INCLUDED
