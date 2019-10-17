struct spaceMarine{int health; char name[25]; char chapter[25];};

int printout(struct spaceMarine *pointer);
int randomizer(struct spaceMarine *pointer);
int changeValues(struct spaceMarine *pointer, char newName[25], char newChapter[25], int newHealth);
int modifyName(struct spaceMarine *pointer, char newName[25]);
int modifyHealth(struct spaceMarine *pointer, int newHealth);
int modifyChapter(struct spaceMarine *pointer, char newChapter[25]);
