#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int printout(struct enemy *pointer) {
  printf("Enemy name: %s\n", pointer->name);
  printf("Enemy health: %i\n", pointer->health);
}

int changeValues(struct enemy *pointer, char newName[25], int newHealth) {
  modifyName(pointer, newName);
  modifyHealth(pointer, newHealth);
  return 0;
}

int modifyName(struct enemy *pointer, char newName[25]) {

  int counter = 0;
  while (newName[counter] != NULL) {
    pointer->name[counter] = newName[counter];
    counter++;
  }
  pointer->name[counter] = NULL;
  return 0;
}

int modifyHealth(struct enemy *pointer, int newHealth) {
  pointer->health = newHealth;
  return 0;
}
