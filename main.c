#include "sort.h"
#include "pirate.h"
#include <stdio.h>

int main(){
	Pirate pirate[10];
	for(int i = 0; i < 10; i++)
		initializePirate(&pirate[i], "Mauricio", 100 - i * 10, 23 + i, "Mugiwara");
	
	insertionSort(pirate, 10, sizeof(pirate[0]), comparePirates);
	for(int i = 0; i < 10; i++)
		printf("%s %lld %d %s\n", pirate[i].name, pirate[i].bounty, pirate[i].age, pirate[i].crew);
}
