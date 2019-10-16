#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int printout(struct spaceMarine *pointer) {
  printf("Space Marine name: %s\n", pointer->name);
  printf("Space Marine health: %i\n", pointer->health);
}

int changeValues(struct spaceMarine *pointer, char newName[25], int newHealth) {
  modifyName(pointer, newName);
  modifyHealth(pointer, newHealth);
  return 0;
}

int modifyName(struct spaceMarine *pointer, char newName[25]) {

  int counter = 0;
  while (newName[counter] != NULL) {
    pointer->name[counter] = newName[counter];
    counter++;
  }
  pointer->name[counter] = NULL;
  return 0;
}

int modifyHealth(struct spaceMarine *pointer, int newHealth) {
  pointer->health = newHealth;
  return 0;
}
