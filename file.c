#include "file.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]) {

	return 0;

}

struct pop_entry * make_entry(int y, int p, char c[]) {

	struct pop_entry * new_struct = malloc(sizeof(struct pop_entry *));
	new_struct->year = y;
	new_struct->population = p;
	strcpy(new_struct->boro, c);

}

struct pop_entry ** read_csv() {


	struct pop_entry ** retarr = malloc(sizeof(struct pop_entry *) * 5);
	int yearnum;
	int popsize;
	int file = open(nyc_pop.csv, O_RDONLY, 0);
	read(file, &yearnum, sizeof(int));

}
