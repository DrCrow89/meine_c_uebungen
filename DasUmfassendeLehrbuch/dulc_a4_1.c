#include <stdio.h>
#include <stdlib.h>

int main()
{
    /** Zinsberechnung
     *  Dieses Programm berechnet die benötigten Jahre
     *  um mit einem Anfangskapital und einem Zinssatz
     *  auf ein Wunschkapital zu kommen.
     */

    float anfangskapital = 0.0;
    float jahresZinssatz = 0.0;
    float zielsumme = 0.0;
    int jahre = 0;
    printf("Anfangskapital: ");
    scanf("%f",&anfangskapital);
    printf("Zinssatz (Jahr): ");
    scanf("%f",&jahresZinssatz);
    printf("Zielsumme: ");
    scanf("%f",&zielsumme);
    float rechenwert = anfangskapital;

    for(; rechenwert < zielsumme; jahre++)
    {
        rechenwert = rechenwert + (rechenwert*jahresZinssatz/100);
    }
    printf("Um die Zielsumme von %f zu erreichen, dauert es %d Jahre.\n", zielsumme, jahre);
    printf("Der Kontostand nach %d Jahre(n) ist %f\n", jahre, rechenwert);

    return 0;
}
