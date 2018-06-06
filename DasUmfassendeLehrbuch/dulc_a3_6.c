#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hoehe = 0, legosteine = 0;
    printf("Bitte die Hoehe eingeben: ");
    scanf("%d", &hoehe);

    for(int i = 0; i <= hoehe; i++)
    {
        legosteine = legosteine + i;
    }
    printf("Es werden %d Legosteine benoetigt\n", legosteine);
    return 0;
}
