#ifndef INFEKT_IMPORT
#define INFEK_IMPORT

float infektRate = 0.6;
float immuniRate = 0.06;
int population = 2000;
int akkutKranke = 10;
int tage = 25;

int berechneGesunde(int population,int gesundeN, int krankeN, float infektionsrate)
{
    int gesundeNplus = gesundeN - infektionsrate*(gesundeN*krankeN/population);
    return gesundeNplus;
}
int berechneImmune(int immunN, float immunisierungsrate, int krankN)
{
    int immunNplus = immunN + immunisierungsrate*krankN;
    return immunNplus;

}
int berechneKranke(int population,int gesundeNplus,int immunNplus)
{
    int krankNplus = population - gesundeNplus - immunNplus;
    return krankNplus;
}
#endif // INFEKT_IMPORT
