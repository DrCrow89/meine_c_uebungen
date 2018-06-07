#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Loesung 1
    float eimer_x = 0.0;
    float eimer_y = 0.0;
    float prozent_x = 0.0;
    float prozent_y = 0.0;
    int anzahl_n = 0;
    printf("Fuellstand von x: ");
    scanf("%f",&eimer_x);
    printf("Fuellstand von y: ");
    scanf("%f",&eimer_y);
    printf("Uemfuellen von x: ");
    scanf("%f",&prozent_x);
    printf("Uemfuellen von y: ");
    scanf("%f",&prozent_y);
    printf("Umfuellanzahl: ");
    scanf("%d",&anzahl_n);
    //printf("x: %f ",eimer_x);

    float prozent_xx = prozent_x/100.0;
    float prozent_yy = prozent_y/100.0;
    float aus_x = 0.0;
    float aus_y = 0.0;
    int i = 0;

    for(i = 0; i < anzahl_n; i++)
    {
        aus_x = (eimer_x*prozent_xx);
        eimer_x = eimer_x - aus_x;
        eimer_y = eimer_y + aus_x;

        aus_y = (eimer_y*prozent_yy);
        eimer_y = eimer_y - aus_y;
        eimer_x = eimer_x + aus_y;
    }
    printf("Nach dem %d-ten Umfuellen ist x = %f und y = %f\n",i,eimer_x, eimer_y);

    // Loesung 2
    float x,y,a,b,p;
    int n,j;
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("n: ");
    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        p=a*x/100.0;
        x-=p;
        y+=p;
        p=b*y/100.0;
        y-=p;
        x+=p;
    }
    printf("Nach dem %d-ten Umfuellen ist x = %f und y = %f\n",j,x, y);

    return 0;
}
