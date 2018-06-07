#include <stdio.h>
#include <stdlib.h>

    int gibKleinereZahl(int *zahl_1, int *zahl_2)
    {
        if(*zahl_1 < *zahl_2)
        {
            //printf("K: %d\n", temp1);
            return *zahl_1;
        }
        else
        {
            //printf("K: %d\n", temp2);
            return *zahl_2;
        }
    }

    int gibGroessereZahl(int *zahl_1, int *zahl_2)
    {
        if(*zahl_1 > *zahl_2)
        {
            //printf("G: %d\n", temp1);
            return *zahl_1;
        }
        else
        {
            //printf("G: %d\n", temp2);
            return *zahl_2;
        }
    }
int main()
{
    /** Größter gemeinsamer Teiler (ggT)
     * Dieses Programm berechnet aus zwei natürlichen
     * Zahlen den größten gemeinsamen Teiler.
     */

    int zahl1 = 0;
    int zahl2 = 0;
    int temp = 0;
    int tempK = 0;
    int tempG = 0;
    printf("1. Natuerliche Zahl: ");
    scanf("%d",&zahl1);
    printf("2. Natuerliche Zahl: ");
    scanf("%d",&zahl2);

    int kleinere = gibKleinereZahl(&zahl1,&zahl2);
    int groessere = gibGroessereZahl(&zahl1,&zahl2);

    if(zahl1 == zahl2)
    {
        printf("Die Zahlen muessen unterschiedlich sein\n");
    }
    else
    {
        for(int i = 0; groessere != kleinere; i++)
        {
            temp = groessere - kleinere;
            printf("%d - %d = %d\n", groessere, kleinere, temp);
            tempK = kleinere;
            tempG = temp;
            kleinere = gibKleinereZahl(&tempK,&tempG);
            groessere = gibGroessereZahl(&tempK,&tempG);
        }
    }
    printf("ggT: %d\n",groessere);

    return 0;
}
