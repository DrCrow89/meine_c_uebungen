#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mathrk.h"

int main()
{
    /** \brief Ermittelt die Primzahlzerlegung von einer vom Benutzer eingegebenen Zahl
     *
     * \param eingabe
     * \param
     * \return 0
     *
     */

    /*
     * Bei der Eingabe von 13230 erhält man das Ergebnis:
     * 13230 = 2*3*3*3*5*7*7
     */
    int eingabe = 0;
    int primZahl = 2;
    int faktorArray [100];

    for(int i = 0; i<= 99; i++)
    {
        faktorArray[i] = 0;
    }

    printf("Programm Primzahlzerlegung\n");
    printf("Bitte Zahl zur Zerlegung eingeben:");
    scanf("%d",&eingabe);

    int eingabeKopie = eingabe;
    int j = 0;

    for(; eingabeKopie > 1; )
    {
        if(eingabeKopie%primZahl == 0)
        {
            eingabeKopie = eingabeKopie/primZahl;
            faktorArray[j] = primZahl;
            j++;
        }
        else
        {
            primZahl++;
            for(; checkPrimzahl(primZahl) == false;)
            {
                primZahl++;
            }
        }
    }
    printf("%d = ",eingabe);
    for(int k = 0; faktorArray[k] != 0; k++)
    {
        if(k < j && k != 0)
        {
            printf("*");
        }
        printf("%d",faktorArray[k]);
    }
    printf("\n");
    return 0;
}
