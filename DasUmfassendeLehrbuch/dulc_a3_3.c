#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jahreszahl = 0;
    printf("Jahreszahl eingeben: ");
    scanf("%d",&jahreszahl);
    printf("\n");
    printf("\n");

    if(jahreszahl%400 == 0)
    {
        printf("Es ist ein Schaltjahr\n");
    }
    else
    {
        if(jahreszahl%100 == 0)
        {
            printf("Es ist kein Schaltjahr\n");
        }
        else
        {
            if(jahreszahl%4 == 0)
            {
                printf("Es ist ein Schaltjahr\n");
            }
            else
            {
                printf("Es ist kein Schaltjahr\n");
            }
        }
    }

    return 0;
}
