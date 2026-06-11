#ifndef PIRATE_H
#define PIRATE_H

#define STRING_SIZE 40

typedef struct{
	char name[STRING_SIZE];
	long long int bounty;
	int age;
	char crew[STRING_SIZE]:
} Pirate;

int comparePirates(const void *, const void *);

void initializePirate(Pirate *, char *, long long int, int, char *);

#endif
