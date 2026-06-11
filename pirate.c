#include "pirate.h"
#include "string.h"


int comparePirates(const void *x, const void *y){
	if(x->bounty > y->bounty)
		return 1;
	if(x->bounty < y->bounty)
		return -1;
	if(x->age < y->age)
		return 1;
	if(x->age > y->age)
		return -1;
	if(strcmp(x->name, y->name) < 0)
		return 1;
	if(strcmp(x->name, y->name) > 0)
		return -1;
	if(strcmp(x->crew, y->crew) < 0)
		return 1;
	if(strcmp(x->crew, y->crew) < 0)
		return -1;
	return 0;	
}

void initializePirate(Pirate * p, char *name, long long int bounty, int age, char *crew){
	strcpy(p->name, name);
	p->bounty = bounty;
	p->age = age;
	strcpy(p->crew, crew);
}
