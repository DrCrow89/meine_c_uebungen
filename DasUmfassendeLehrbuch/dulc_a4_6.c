#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ergebnisArray[3][20];
    int sitzanzahl = 0;//10;
    int stimmenP1 = 0; //100000;
    int stimmenP2 = 0; //80000;
    int stimmenP3 = 0; //20000;

    printf("Eingaben\n");
    printf("Sitzanzahl: ");
    scanf("%d",&sitzanzahl);
    printf("Stimmen Partei 1: ");
    scanf("%d",&stimmenP1);
    printf("Stimmen Partei 2: ");
    scanf("%d",&stimmenP2);
    printf("Stimmen Partei 3: ");
    scanf("%d",&stimmenP3);
    printf("\n");

    int sortArrayW[sitzanzahl];
    int sortArrayP[sitzanzahl];
    int maxWert = 0;
    int indexW = 0;
    int indexP = 0;
    int index = 0;
    int kopieSitzanzahl = sitzanzahl;

    int sitzeA = 0;
    int sitzeB = 0;
    int sitzeC = 0;
    int teilerA = 1;
    int teilerB = 1;
    int teilerC = 1;
    int quotientA = stimmenP1;
    int quotientB = stimmenP2;
    int quotientC = stimmenP3;

    /* ---------------------------
     * ---------------------------
     * ---Arrays initialisieren---
     * ---------------------------
     * ---------------------------
     */
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<20; j++)
        {
            ergebnisArray[i][j] = 0;
            //printf("Array[%d][%d]\n",i,j);
        }
    }
    for(int i = 0; i<sitzanzahl;i++)
    {
        sortArrayW[i] = 0;
        sortArrayP[i] = 0;
    }
    /* ---------------------------
     * ---------------------------
     * ---Parteistimmen zählen----
     * ---------------------------
     * ---------------------------
     */

    printf("Ausgaben\n");
    for(int m = 1; m<=20;m++) // Partei 1
    {
        ergebnisArray[0][m-1] = stimmenP1/m;
        ergebnisArray[1][m-1] = stimmenP2/m;
        ergebnisArray[2][m-1] = stimmenP3/m;
        printf("[%d][%d][%d]\n",ergebnisArray[0][m-1],ergebnisArray[1][m-1],ergebnisArray[2][m-1]);
    }
    printf("\n");
    /* ---------------------------
     * ---------------------------
     * --------Berechnung---------
     * ---------------------------
     * ---------------------------
     */
    for(; sitzanzahl > 0; sitzanzahl--)
    {
        //printf("Index: %d\n",index);
        //printf("Sitze: %d\n",sitzanzahl);
        if(quotientA >= quotientB && quotientA >= quotientC)
        {
            //printf("A> | Q: %d | S: %d | T: %d\n",quotientA,sitzeA,teilerA);
            sortArrayW[index] = quotientA;
            sortArrayP[index] = 1;
            sitzeA = sitzeA + 1;
            teilerA = teilerA + 1;
            quotientA = stimmenP1 / teilerA;
            //printf("Testausgabe: %d\n",sortArrayW[index]);
        }
        else if(quotientB > quotientA && quotientB >= quotientC)
        {
            //printf("B> | Q: %d | S: %d | T: %d\n",quotientB,sitzeB,teilerB);
            sortArrayW[index] = quotientB;
            sortArrayP[index] = 2;
            sitzeB = sitzeB + 1;
            teilerB = teilerB + 1;
            quotientB = stimmenP2 / teilerB;
        }
        else if(quotientC > quotientA && quotientC > quotientB)
        {
            //printf("C> | Q: %d | S: %d | T: %d\n",quotientC,sitzeC,teilerC);
            sortArrayW[index] = quotientC;
            sortArrayP[index] = 3;
            sitzeC = sitzeC + 1;
            teilerC = teilerC + 1;
            quotientC = stimmenP3 / teilerC;
        }
        index++;
    }
    /* ---------------------------
     * ---------------------------
     * ----------Ausgabe----------
     * ---------------------------
     * ---------------------------
     */
     printf("Ergebnisse\n");
    for(int i = 0; i<kopieSitzanzahl;i++)
    {
        printf("P:%d mit %d Stimmen\n",sortArrayP[i],sortArrayW[i]);
    }
    printf("Partei 1: %d Stimmen\n",sitzeA);
    printf("Partei 2: %d Stimmen\n",sitzeB);
    printf("Partei 3: %d Stimmen\n",sitzeC);
    return 0;
}
