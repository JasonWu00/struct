#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include <time.h>

int printout(struct spaceMarine *pointer) {
  printf("Space Marine name: %s\n", pointer->name);
  printf("Space Marine health: %i\n", pointer->health);
  printf("Space Marine Chapter: %s\n", pointer->chapter);
}

int randomizer(struct spaceMarine *pointer) {
  //make random new name
  srand(time(NULL)); //to set the system
  int randomHP = rand()%1000 + 500;
  char alphabet[56] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int numberOfChars = rand()%24 + 1;
  //anywhere from 1 to 24 letters for a name
  //with 1 more for NULL
  char newName[25] = "";
  int counter = 0;
  for (counter = 0; counter < numberOfChars; counter++) {
    newName[counter] = alphabet[rand()%55];
  }
  char newChapter[25] = "";
  for (counter = 0; counter < numberOfChars; counter++) {
    newChapter[counter] = alphabet[rand()%55];
  }
  changeValues(pointer, newName, newChapter, randomHP);
  return 0;
}

int changeValues(struct spaceMarine *pointer, char newName[25], char newChapter[25], int newHealth) {
  modifyName(pointer, newName);
  modifyHealth(pointer, newHealth);
  modifyChapter(pointer, newChapter);
  return 0;
}

int modifyName(struct spaceMarine *pointer, char newName[25]) {
  int counter = 0;
  /*while (newName[counter] != NULL) {
    pointer->name[counter] = newName[counter];
    counter++;
  }
  pointer->name[counter] = NULL;*/
  strcpy(pointer->name, newName);
  return 0;
}

int modifyHealth(struct spaceMarine *pointer, int newHealth) {
  pointer->health = newHealth;
  return 0;
}

int modifyChapter(struct spaceMarine *pointer, char newChapter[25]) {
  int counter = 0;
  /*while (newChapter[counter] != NULL) {
    pointer->chapter[counter] = newChapter[counter];
    counter++;
  }
  pointer->chapter[counter] = NULL;*/
  strcpy(pointer->chapter, newChapter);
  return 0;
}
