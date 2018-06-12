#include <stdio.h>
#include <stdlib.h>
char ja = 'j';
char nein = 'n';
char lieferfaehig = 'n';
char vollstaendig = 'n';
char bonitaet = 'n';

int main()
{
  bedingungen_lesen();
  aktion_erstellen();
  return 0;
}

void bedingungen_lesen()
{
  printf("Lieferfähig?: ");
  lieferfaehig = getchar();
  printf("Angaben vollständig?: ");
  vollstaendig = getchar();
  printf("Bonität in Ordung?: ");
  bonitaet = getchar();
}

void aktion_erstellen()
{
  if(
      (lieferfaehig == ja)
    &&(vollstaendig == Ja)
    &&(bonitaet == Ja)
}
