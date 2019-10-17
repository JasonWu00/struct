#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int main() {
  struct spaceMarine Astartes;
  strcpy(Astartes.name, "Cato Sicarius");
  Astartes.health = 1000;
  strcpy(Astartes.chapter, "Ultramarines");
  struct spaceMarine *pointer = &Astartes;

  struct spaceMarine randomSM;
  struct spaceMarine *pointerTwo = &randomSM;
  randomizer(pointerTwo);
  printf("Here's a randomized Space Marine:\n");
  printout(pointerTwo);
  printf("\n");

  printf("Now for Cato Sicarius, of the Ultramarines 2nd Company:\n\n");
  printout(pointer);

  //time to change it up
  changeValues(pointer, "Asmodai", "Dark Angels", 900); //arbitrary health value
  printf("\n");
  printf("Now for a change, to Asmodai of the Dark Angels:\n\n");
  printout(pointer);
  return 0;
}
