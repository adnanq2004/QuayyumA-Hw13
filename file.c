#include "file.h"
#include <fcntl.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

struct pop_entry * make_entry(int y, int p, char c[15]) {

	struct pop_entry * new_struct = malloc(sizeof(struct pop_entry *));
	new_struct->year = y;
	new_struct->population = p;
	strcpy(new_struct->boro, c);

}

// void print_csv(char *** notfun) {
// 	int row;
// 	int col;
// 	for (row = 0; row < sizeof(*notfun); row++) {
// 		printf("{");
// 		for (col = 0; col < sizeof(*notfun[0]); col++) {
// 			printf("%s ", notfun[row][col]);
// 		}
// 		printf("}\n");
// 	}
// }

void read_csv() {

	// struct pop_entry ** retarr = malloc(sizeof(struct pop_entry *) * 5);
	// int yearnum;
	// int popsize;
	// int file = open(nyc_pop.csv, O_RDONLY, 0);
	// read(file, &yearnum, sizeof(int));
	// read(file, &popsize, sizeof(int));
	// retarr[0] = make_entry(yearnum, popsize, "Manhattan");
	// read(file, &popsize, sizeof(int));
	// retarr[1] = make_entry(yearnum, popsize, "Brooklyn");
	// read(file, &popsize, sizeof(int));
	// retarr[2] = make_entry(yearnum, popsize, "Queens");
	// read(file, &popsize, sizeof(int));
	// retarr[3] = make_entry(yearnum, popsize, "Bronx");
	// read(file, &popsize, sizeof(int));
	// retarr[4] = make_entry(yearnum, popsize, "Staten Island");
	// char ** boroughs;
	// read(filetoread, boroughs, 45);
	// struct pop_entry ** retarr = malloc(sizeof(struct pop_entry *) * 5);
	// char * yearnum;
	// char * popsize;
	// for ()
	// char *** numsofimportance = malloc(15*6*23);
	// void * ptr;
	// read(filetoread,ptr,51);
	// struct pop_entry *** retarr = malloc((sizeof(struct pop_entry) * 5) * 23);
	// struct pop_entry ** retarr = malloc(sizeof(struct pop_entry) * 5);
	// char * yearnum;
	// int yearn;
	// char * popnum;
	// int popn;
	// int i;
	// int j;
	int filetoread = open("nyc_pop.csv", O_RDONLY);
	char * unfun = malloc(950);
	read(filetoread, unfun, 950);

	// char ** yearnums = malloc(4 * 24);
	// char ** manhattannums = malloc(15*24);
	// char ** brooklynnums = malloc(15*24);
	// char ** queensnums = malloc(15*24);
	// char ** bronxnums = malloc(15*24);
	// char ** statenislandnums = malloc(15*24);


	int filetoreadtwo = open("nyc_pop.csv", O_RDONLY);
	// char *** nums = malloc(15*24*6);
	char nums[24][6][15];
	// char * nums = &numsarr;
	int i = 0;
	int j = 0;
	char * tempc = malloc(1);
	char * temps = malloc(15);
	while (i < 24) {
		read(filetoreadtwo, tempc, 1);
		// if (tempc[0] == ',') {
		// 	strcpy(nums[j][i], temps);
		// 	nums[j][i] = temps;
		// 	temps = 0;
		// }
		// else if (tempc[0] == '\n') {
		// 	strcpy(nums[j][i], temps);
		// 	temps = 0;
		// 	i++;
		// 	j = 0;
		// }
		// else {
		if (tempc[0] != ',' && tempc[0] != '\n') {
			// printf("%d\n", 6);
			strcat(temps, tempc);
		}
		if (tempc[0] == ',') {
			// printf("%d\n", 5);
			strcpy(&nums[i][j][0], temps);
			j++;
			// printf("%s.\n", temps);
			temps[0] = '\0';
		}
		if (tempc[0] == '\n') {
			// printf("%d\n", 7);
			strcpy(&nums[i][j][0], temps);
			i++;
			j = 0;
			// printf("%s.\n", temps);
			temps[0] = '\0';
		}
		// i++;
		// }
		// else {
		// printf("%s.\n", tempc);
		// printf("%s.\n", temps);
		// }
	}

	int row;
	int col;
	for (row = 0; row < 24; row++) {
		printf("{");
		for (col = 0; col < 6; col++) {
			printf("%s ", nums[row][col]);
		}
		printf("}\n");
	}

	// print_csv(&nums);
	// DIR * dir = opendir("./");
	// struct dirent * point = readdir(dir);
	// struct stat * s;
	// int ex = 1;
	// while (point && ex) {
	// 	if (!strcmp(point->d_name, "nyc_pop.csv")) {
	// 		stat(point->d_name, s);
	// 		ex = 0;
	// 	}
	// 	else {
	// 		point = readdir(dir);
	// 	}
	// }
	// printf("\n");
	// printf("%c", unfun[0]);
	// printf("%ld\n", e);
	// char arr[5] = "abcde";
	// char fun[1];
	// char * unfun = fun;
	// unfun = arr;
	// printf("%s\n", unfun);

}

int main(int argc, char *argv[]) {

	read_csv();
	return 0;

}
