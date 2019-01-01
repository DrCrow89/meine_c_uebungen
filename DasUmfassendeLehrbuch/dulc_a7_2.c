#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main(void) {
  struct array_string wort = einlesen_string_in_array();
  struct array_string tausch = tausche_buchstaben_in_array(wort);

  printf("Vertauscht: ");
  ausgabe_string_in_array(tausch);

  return 0;
}
