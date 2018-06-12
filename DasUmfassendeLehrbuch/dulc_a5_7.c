#include <stdio.h>
#include <stdlib.h>
char ja = 'j';
char nein = 'n';
char lieferfaehig = 'n';
char vollstaendig = 'n';
char bonitaet = 'n';
char puffer_enter = 't';

void bedingungen_lesen()
{
  printf("\nLieferfähig?: ");
  scanf("%c%c", &lieferfaehig, &puffer_enter);
  printf("\nAngaben vollständig?: ");
  scanf("%c%c", &vollstaendig, &puffer_enter);
  printf("\nBonität in Ordung?: ");
  scanf("%c%c", &bonitaet, &puffer_enter);
}

void aktion_erstellen()
{
  if(  (lieferfaehig == ja)
     &&(vollstaendig == ja)
     &&(bonitaet == ja)
    )
    {
      printf("Lieferung mit Rechnung\n");
    }
  else if(  (lieferfaehig == ja)
          &&(vollstaendig == ja)
          &&(bonitaet == nein)
         )
    {
      printf("Lieferung als Nachname\n");
    }
  else if(  (lieferfaehig == ja)
          &&(vollstaendig == nein)
          &&(bonitaet == ja)
         )
      {
        printf("Lieferung mit Rechnung\n");
        printf("Angaben vervollständigen\n");
      }
  else if(  (lieferfaehig == ja)
          &&(vollstaendig == nein)
          &&(bonitaet == ja)
         )
        {
          printf("Lieferung als Nachname\n");
          printf("Angaben vervollständigen\n");
        }
  else
  {
    printf("nicht lieferbar\n");
  }

}

int main()
{
  while(1)
  {
    bedingungen_lesen();
    aktion_erstellen();
  }
  return 0;
}
