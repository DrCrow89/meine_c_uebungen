#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionenrk.h"

int main(void) {
  struct array_string new_array;
  char eingabe_wort[100];
  new_array = einlesen_string_in_array();

  ausgabe_string_in_array(new_array);

  return 0;
}
