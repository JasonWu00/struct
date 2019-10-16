#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int main() {
  struct spaceMarine Astartes;
  strcpy(Astartes.name, "Cato Sicarius");
  Astartes.health = 1000;
  struct spaceMarine *pointer = &Astartes;

  printout(pointer);

  //time to change it up
  changeValues(pointer, "Asmodai", 900); //arbitrary health value
  printout(pointer);
  return 0;
}
