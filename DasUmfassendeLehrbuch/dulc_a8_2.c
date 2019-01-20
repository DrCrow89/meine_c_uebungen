// Funktionen müssen immer die gleichen Typ von Parameter besitzen und auch den gleichen Rückgabewert
int division_durch_zwei(int uebergabe_wert)
{
int ergebnis = 0; 
ergebnis = uebergabe_wert/2; 
return ergebnis;
}
int rest_bei_division_durch_zwei(int uebergabe_wert)
{
int ergebnis = 0; 
ergebnis = uebergabe_wert%2; 
return ergebnis;
}
int ausgabe(int uebergabe_wert)
{
printf("%d\n",uebergabe_wert); 
return 0;
}

void e_l_w_m_sau(int *uebergabe_array, int uebergabe_groesse, int uebergabe_funktion(int))
{
for(int i = 0; i < uebergabe_groesse, i++)
uebergabe_array[i] = uebergabe_funktion(uebergabe_array[i];)
}

int main()
{
int zahlen_array[10] = {1, 12, 31, 17, 11, 0, 22, 9, 4, 7};
e_l_w_m_sau(zahlen_array, 10, division_durch_zwei);
e_l_w_m_sau(zahlen_array, 10, rest_bei_division_durch_zwei);
e_l_w_m_sau(zahlen_array, 10, ausgabe);

}
