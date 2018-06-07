#include <stdio.h>
#include <stdlib.h>
#include "infekt.h"

int main()
{
    int krank = akkutKranke;
    int gesund = population - krank;
    int immun = 0;

    for(int i = 1; i <= tage; i++)
    {
        gesund = berechneGesunde(population,gesund,krank,infektRate);
        immun = berechneImmune(immun,immuniRate,krank);
        krank = berechneKranke(population,gesund,immun);
        printf("Tag: %d mit G: %d, K: %d und I: %d\n",i,gesund,krank,immun);
    }
    return 0;
}
