#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studiendirektoren = 40;
    int oberstudienraete = 160;
    int studienraete = 1000;
    int oberDiff = 0;
    int studDiff = 0;

    printf("Es sind %d Studienrektoren, %d Oberstudienraete und %d Studienraete.\n",studiendirektoren,oberstudienraete,studienraete);


    for(int jahre = 1; jahre <= 10; jahre++)
    {
        studiendirektoren = studiendirektoren - (studiendirektoren*20/100);
        oberstudienraete = oberstudienraete - (oberstudienraete*20/100);
        studienraete = studienraete - (studienraete*20/100);

        oberDiff = oberstudienraete*10/100;
        studiendirektoren = studiendirektoren + oberDiff;
        oberstudienraete = oberstudienraete-oberDiff;

        studDiff = studienraete*20/100;
        oberstudienraete = oberstudienraete + studDiff;
        studienraete = studienraete - studDiff;
        studienraete = 1000;

        printf("Nach %d Jahren sind es %d Studienrektoren, %d Oberstudienraete und %d Studienraete.\n",jahre*3,studiendirektoren,oberstudienraete,studienraete);

    }
    return 0;
}
