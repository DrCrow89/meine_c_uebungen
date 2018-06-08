#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Zusammenfassung Zusammensetzung
// A = 7
// b = 8
// C = 9
// AbC = 789
// => AbC = 100*A + 10*b + c
// => 794
// = 794/100 = 7
int primZahl(int pruefzahl)
{
/** \brief Bestimmt ob die Übergebene Zahl ein Primzahl ist
 *
 * \param int pruefzahl
 * \return int primZahlBool
 *
 */
    int primZahlBool = 1; //0: Keine Primzahl 1: Primzahl
    for(int devisor = 2; devisor < pruefzahl; devisor++)
    {
        if(pruefzahl%devisor == 0)
        {
            primZahlBool = 0;
            break;
        }
    }
    return primZahlBool;
}

void ausgabePrimzahl(int primZahlBool, int eingegebeneZahl)
{
    if(primZahlBool == 1)
    {
        printf("Die Zahl %d ist eine Primzahl\n",eingegebeneZahl);
    }
    else
    {
        printf("Die Zahl %d ist keine Primzahl\n",eingegebeneZahl);
    }
}

int vielfaches(int pruefZahl, int vergleichsZahl)
{
    int vielfachesBool = 1; //0: Kein vielfaches 1: vielfaches
    if(pruefZahl%vergleichsZahl == 0)
    {
        return vielfachesBool = 1;
    }
    else
    {
        return vielfachesBool = 0;
    }
}

void ausgabeVielfaches(int vielfachesBool, int pruefZahl, int vergleichsZahl)
{
    if(vielfachesBool == 1)
    {
        printf("Die Zahl %d ist ein vielfaches von %d\n",vergleichsZahl, pruefZahl);
    }
    else
    {
        printf("Die Zahl %d ist kein vielfaches von %d\n",vergleichsZahl, pruefZahl);
    }
}

int quersumme(int ersteZahl, int zweiteZahl, int dritteZahll)
{
    int quersumme = 0;
    return quersumme = (ersteZahl + zweiteZahl + dritteZahll);
}

int pruefeSumme(int a, int b, int c, int d, int e, int f, int g, int h)
{
    int pruefArray[9] = {a, b, c, d, e, f, g, h};
    int pruefeSum = 0;
    int zaehler = 1;
    int zielzahl = 45;
    int summeKorrekt = 0;
    for(; zaehler <= 9; zaehler++)
    {
        pruefeSum = pruefeSum + pruefArray[zaehler-1];
        if(pruefeSum >= zielzahl)
        {
            break;
        }
    }
    if(pruefeSum == zielzahl && zaehler == 9)
    {
        return summeKorrekt = 1;
    }

    return summeKorrekt = 0;
}

int main()
{
    int A = 1, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0;
    int a = 1, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
    int eingabeZahl = 0;
    int pruefung = 9;
    int eingabeZahl1 = 0;
    int eingabeZahl2 = 0;
    int ende = 0;
    int step = 0;

    for(A = 1; A < 10; A++)
    {
        if(ende == 1){break;}
        for(a = 1; a < 10; a++)
        {
            if(ende == 1){break;}
            if(primZahl(A*10+a) == 1)
            {
                printf("Primzahl A: %d\n",A*10+a);
                for(B = 1; B < 10; B++)
                {
                    if(ende == 1){break;}
                    for(b = 1; b < 10; b++)
                    {
                        if(ende == 1){break;}
                        if(primZahl(B*10+b) == 1)
                        {
                            printf("Primzahl A: %d + B: %d\n",A*10+a,B*10+b);
                            for(C = 1; C < 10; C++)
                            {
                                if(ende == 1){break;}
                                for(c = 1; c < 10; c++)
                                {
                                    if(ende == 1){break;}
                                    if(primZahl(C*10+c) == 1
                                        //Bedingung: ABC ist viefaches von Aa
                                        &&(vielfaches(A*100+B*10+C,A*10+a) == 1)
                                        //Bedingung: abc == cba
                                        &&((a*100+b*10+c) == (c*100+b*10+a))
                                       )
                                    {
                                        printf("Primzahl A: %d + B: %d + C: %d\n",A*10+a,B*10+b,C*10+c);
                                        //sleep(5);
                                        for(D = 1; D < 10; D++)
                                        {
                                            if(ende == 1){break;}
                                            for(d = 1; d < 10; d++)
                                            {
                                                if(ende == 1){break;}
                                                if(primZahl(D*10+d) == 1)
                                                {
                                                    printf("Primzahl A: %d + B: %d + C: %d + D: %d\n",A*10+a,B*10+b,C*10+c,D*10+d);
                                                    for(E = 1; E < 10; E++)
                                                    {
                                                        if(ende == 1){break;}
                                                        for(e = 1; e < 10; e++)
                                                        {
                                                            if(ende == 1){break;}
                                                            if(primZahl(E*10+e) == 1
                                                                //Bedingung: CDE == Cc * Quersumme(CDE)
                                                                &&((C*100+D*10+E) == (C*10+c)*quersumme(C,D,E))
                                                                //Bedingung: Bb == Quersumme(cde)
                                                                &&((B*10+b) == quersumme(c,d,e))
                                                               )
                                                            {
                                                                printf("Primzahl A: %d + B: %d + C: %d + D: %d + E: %d\n",A*10+a,B*10+b,C*10+c,D*10+d,E*10+e);
                                                                for(F = 1; F < 10; F++)
                                                                {
                                                                    if(ende == 1){break;}
                                                                    for(f = 1; f < 10; f++)
                                                                    {
                                                                        if(ende == 1){break;}
                                                                        if(primZahl(F*10+f) == 1)
                                                                        {
                                                                            printf("Primzahl A: %d + B: %d + C: %d + D: %d + E: %d + F: %d\n",A*10+a,B*10+b,C*10+c,D*10+d,E*10+e,F*10+f);
                                                                            //sleep(5);
                                                                            for(G = 1; G < 10; G++)
                                                                            {
                                                                                if(ende == 1){break;}
                                                                                for(g = 1; g < 10; g++)
                                                                                {
                                                                                    if(ende == 1){break;}
                                                                                    if(primZahl(G*10+g) == 1
                                                                                        //Bedingung: EFG ist vielfaches von Aa
                                                                                        &&(vielfaches(E*100+F*10+G,A*10+a) == 1)
                                                                                       //Bedingung: efg = Aa * Quer(efg)
                                                                                        &&((A*10+a)*quersumme(e,f,g) == (e*100+f*10+g))
                                                                                       )
                                                                                    {
                                                                                        printf("Primzahl A: %d + B: %d + C: %d + D: %d + E: %d + F: %d + G: %d\n",A*10+a,B*10+b,C*10+c,D*10+d,E*10+e,F*10+f,G*10+g);
                                                                                        //sleep(5);
                                                                                        for(H = 1; H < 10; H++)
                                                                                        {
                                                                                            if(ende == 1){break;}
                                                                                            for(h = 1; h < 10; h++)
                                                                                            {
                                                                                                if(ende == 1){break;}
                                                                                                //Bedinguung: Zahl ist Primzahlen
                                                                                                if(primZahl(H*10+h) == 1)
                                                                                                {
                                                                                                    //Bedingung: GHA = eE * Quer(ABC)
                                                                                                    if((e*10+E)*quersumme(A,B,C) == (G*100+H*10+A))
                                                                                                    {
                                                                                                        //Bedingung: Quersumme(gha) = Cc
                                                                                                        if((C*10+c) == quersumme(g,h,a))
                                                                                                        {
                                                                                                            ende = 1;                                                                                                         printf("--------------------------------------------------------------------\n");
                                                                                                            printf("Primzahl A: %d + B: %d + C: %d + D: %d + E: %d + F: %d + G: %d + H: %d\n",A*10+a,B*10+b,C*10+c,D*10+d,E*10+e,F*10+f,G*10+g, H*10+h);
                                                                                                            printf("Zahlen: A: %d, a: %d, B: %d, b: %d, C: %d, c: %d, D: %d, d: %d\n",A,a,B,b,C,c,D,d);
                                                                                                            printf("Zahlen: E: %d, e: %d, F: %d, f: %d, G: %d, g: %d, H: %d, h: %d\n",E,e,F,f,G,g,H,h);
                                                                                                            printf("--------------------------------------------------------------------\n");
                                                                                                            //sleep(10);
                                                                                                            break;
                                                                                                        }//H-Schleife Quersumme(gha) = Cc
                                                                                                    }//H-Schleife GHA = eE * Quer(ABC)
                                                                                                }// H-Schleife Primzahlen
                                                                                                //Endprüfung, dass alle Zeichen verschieden sind
                                                                                            }//For-h
                                                                                        }//For-H
                                                                                    }//If-G und g ist Primzahl
                                                                                }//For-g
                                                                            }//For-G
                                                                        }//If-F und f Primzahlen
                                                                    }//For-f
                                                                }//For-F
                                                            }//If-E und e Primzahlen
                                                        }//For-e
                                                    }//For-E
                                                }//If-D und d Primzahlen
                                            }//For-d
                                        }//For-D
                                    }//If-C und c Primzahlen
                                }//For-c
                            }//For-C
                        }//If-B und b Primzahlen
                    }//For-b
                }//For-B
            }//If-A und a Primzahlen
        }//For-a
    } //For-A

    return 0;
}
