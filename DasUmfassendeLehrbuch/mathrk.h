#ifndef MATH2DAY_H_INCLUDED
#define MATH2DAY_H_INCLUDED
#include <stdbool.h>

/** \brief Funktion prüft ob die übergebe Zahl eine Primzahl ist
 *
 * \param int uebergabe
 * \return bool rueckgabe
 *
 */
bool checkPrimzahl(int uebergabe)
{
    bool rueckgabe = true;
    for(int i = 2; i<uebergabe; i++ )
    {
        if(uebergabe%i == 0)
        {
            return rueckgabe = false;
        }
    }
    return rueckgabe;
}

/** \brief Berechnet die Fakultät der übergebenen Zahl
 *
 * \param int uebergabe
 * \param
 * \return int fakultaet
 *
 */

int fakultaet(int uebergabe)
{
    int fakultaet = 1;
    for(int i = 1; i<=uebergabe; i++)
    {
        fakultaet = fakultaet*i;
    }
    return fakultaet;
}

#endif // MATH2DAY_H_INCLUDED
