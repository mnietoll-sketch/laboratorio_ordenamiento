#include "pirate.h"
#include "string.h"

int comparePirates(const void *x, const void *y){
	Pirate* p1 = (Pirate *)x;
	Pirate* p2 = (Pirate *)y;

	if(p1->bounty > p2->bounty)
		return 1;
	if(p1->bounty < p2->bounty)
		return -1;
	if(p1->age < p2->age)
		return 1;
	if(p1->age > p2->age)
		return -1;
	if(strcmp(p1->name, p2->name) < 0)
		return 1;
	if(strcmp(p1->name, p2->name) > 0)
		return -1;
	if(strcmp(p1->crew, p2->crew) < 0)
		return 1;
	if(strcmp(p1->crew, p2->crew) < 0)
		return -1;
	return 0;	
}

void initializePirate(Pirate * p, char *name, long long int bounty, int age, char *crew){
	strcpy(p->name, name);
	p->bounty = bounty;
	p->age = age;
	strcpy(p->crew, crew);
}
