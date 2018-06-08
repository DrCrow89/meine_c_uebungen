#include <stdio.h>
#include <stdlib.h>
#include "mathrk.h"

int main()
{
    while (0)
    {
        int start_zahl = 0;
        int end_zahl = 0;
        printf("Berechnung Summe\n");
        printf("Eingabe Start: ");
        scanf("%d", &start_zahl);
        printf("Eingabe Ende: ");
        scanf("%d", &end_zahl);
        printf("Ergebnis: %d\n", eigeneSumme(start_zahl, end_zahl));
    }

    int hoehe = 4;

    // Pyramide 1
    int steine = 0;
    for(int i = 1; i <= hoehe; i++)
    {
        steine = steine + i*i;
    }
    printf("Steine fuer Pyramide 1: %d Stueck.\n",steine);

    // Pyramide 2
    steine = 0;
    for(int i = 1; i <= hoehe; i++)
    {
        steine = steine + 1+ (i-1)*2;
    }
    printf("Steine fuer Pyramide 2: %d Stueck.\n",steine);

    // Pyramide 3
    steine = 0;
    for(int i = 1; i <= hoehe; i++)
    {
        steine = steine + eigeneSumme(0, i);
    }
    printf("Steine fuer Pyramide 3: %d Stueck.\n",steine);
}
