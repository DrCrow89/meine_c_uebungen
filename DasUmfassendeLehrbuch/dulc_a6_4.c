#include <stdio.h>
#include <ctype.h>

int laenge(char s[]) {
   int i=0;

   while (s[i] != '\0') i++;

   return i;
}

int palindrom(char s[]) {
   int i,l;

   l = laenge(s);

   /* die Schleife läuft bis zur Wortmitte s[l/2];
      falls l ungerade ist, wird das mittlere Element nicht überprüft
      (ist auch nicht nötig)
    */
   for (i=0; i<l/2; i++)
      /* sobald ein falsches Paar gefunden ist, ist schon gewiss, dass
         das Wort kein Palindrom ist => return 0 */
      if ( tolower(s[i]) != tolower(s[l-i-1]))
         return(0);

   /* es wurde kein falsches Paar gefunden => s ist Palindrom! */
   return(1);
}

int main(int argc, char *argv[]) {
   int i;

   for (i=1; i<argc; i++) {
      printf("%s hat %d Zeichen ", argv[i], laenge(argv[i]) );
      if ( palindrom(argv[i]) )
         printf("und ist ein Palindrom\n");
      else
         printf("und ist kein Palindrom\n");
   }
}
