#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min = 0, max = 0;
    printf("Bitte untere Grenze eingeben: ");
    scanf("%d", &min);
    printf("Bitte obere Grenze eingeben: ");
    scanf("%d", &max);
    printf("\n");
    printf("\n");
    printf("Startzahl: %d\n", min + 1);
    printf("Endzahl: %d\n", max - 1);

    for(int i = min + 1; i < max; i++)
    {
        if(i%7 == 0)
        {
            printf("Die Zahl %d ist durch 7 teilbar\n", i);
        }
    }
    return 0;
}
