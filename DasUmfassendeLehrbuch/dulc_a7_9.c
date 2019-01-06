#include <stdio.h>
#include <stdlib.h>

void print_schachbrett(int *array)
{
  // Bei einem Schachbrett gibt es immer nur ein 8x8 Spielfeld.
  int spalten = 8;
  int zeilen = 8;

  for(int i = 0; i < zeilen; i++)
  {
    printf("+---+---+---+---+---+---+---+---+\n");
    for(int j = 0; j < spalten; j++)
    {
      printf("|%3d", array[i+zeilen*j]);
    }
    printf("|\n");
  }
}

int main()
{
  int schachbrett[8][8] = {0};

  print_schachbrett((int*)schachbrett);

  return 0;
}
