#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int tag, monat, jahr;
    int summeTage;
    bool schaltjahr;
    tag = 0, monat = 0, jahr = 0;
    summeTage = 0;
    schaltjahr = false;
    printf("Bitte den Tag eingeben: ");
    scanf("%d", &tag);
    printf("Bitte den Monat eingeben: ");
    scanf("%d", &monat);
    printf("Bitte den Jahr eingeben: ");
    scanf("%d", &jahr);

    if(jahr%400 == 0)
    {
        printf("%d ist ein Schaltjahr", jahr);
        schaltjahr = true;
    }
    else
    {
        if(jahr%100 == 0)
        {
            printf("%d ist kein Schaltjahr", jahr);
            schaltjahr = false;
        }
        else
        {
            if(jahr%4 == 0)
            {
                printf("%d ist ein Schaltjahr", jahr);
                schaltjahr = true;
            }
            else
            {
                printf("%d ist kein Schaltjahr\n", jahr);
                schaltjahr = false;
            }
        }
    }
    summeTage = summeTage + tag;

    if(monat > 1)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 2)
    {
        if(schaltjahr == true)
        {
            summeTage = summeTage + 29;
        }
        else
        {
            summeTage = summeTage + 28;
        }
    }
    if(monat > 3)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 4)
    {
        summeTage = summeTage + 30;
    }
    if(monat > 5)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 6)
    {
        summeTage = summeTage + 30;
    }
    if(monat > 7)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 8)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 9)
    {
        summeTage = summeTage + 30;
    }
    if(monat > 10)
    {
        summeTage = summeTage + 31;
    }
    if(monat > 11)
    {
        summeTage = summeTage + 30;
    }
    if(monat > 12)
    {
        summeTage = summeTage + 31;
    }

    printf("Es ist der %d Tag des Jahres\n", summeTage);

    return 0;
}
