struct enemy{int health; char name[25];};

int printout(struct enemy *pointer);
int changeValues(struct enemy *pointer, char newName[25], int newHealth);
int modifyName(struct enemy *pointer, char newName[25]);
int modifyHealth(struct enemy *pointer, int newHealth);
