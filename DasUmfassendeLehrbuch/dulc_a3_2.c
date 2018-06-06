#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zahl1, zahl2, summe, differenz, produkt, quotient, quotiontRest;
    zahl1 = 0, zahl2 = 0, summe = 0, differenz = 0, quotient = 0, quotiontRest = 0;
    printf("1. Zahl: ");
    scanf("%d", &zahl1);
    printf("2. Zahl: ");
    scanf("%d", &zahl2);
    if(zahl2 == 0)
    {
        printf("Der Quotient muss groesser Null sein\n");
        printf("Programm wird abgebrochen\n");
    }
    else
    {
        summe = zahl1 + zahl2;
        differenz = zahl1 - zahl2;
        produkt = zahl1 * zahl2;
        quotient = zahl1/zahl2;
        quotiontRest = zahl1%zahl2;

        printf("\n");
        printf("\n");
        printf("Summe     %d + %d = %d\n", zahl1, zahl2, summe);
        printf("Differenz %d - %d = %d\n", zahl1, zahl2, differenz);
        printf("Produkt   %d*%d = %d\n", zahl1, zahl2, produkt);
        printf("Quotient  %d/%d = %d Rest %d\n", zahl1, zahl2, quotient, quotiontRest);
    }

    return 0;
}
