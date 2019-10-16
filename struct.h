struct spaceMarine{int health; char name[25];};

int printout(struct spaceMarine *pointer);
int changeValues(struct spaceMarine *pointer, char newName[25], int newHealth);
int modifyName(struct spaceMarine *pointer, char newName[25]);
int modifyHealth(struct spaceMarine *pointer, int newHealth);
