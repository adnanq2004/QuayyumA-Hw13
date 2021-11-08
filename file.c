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

void read_csv() {

	int filetoread = open("nyc_pop.csv", O_RDONLY);
	char * unfun = malloc(950);
	read(filetoread, unfun, 950);
	char nums[24][6][15];
	int filetoreadtwo = open("nyc_pop.csv", O_RDONLY);
	int i = 0;
	int j = 0;
	char * tempc = malloc(1);
	char * temps = malloc(15);
	while (i < 24) {
		read(filetoreadtwo, tempc, 1);
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
	}

	// int row;
	// int col;
	// for (row = 0; row < 24; row++) {
	// 	printf("{");
	// 	for (col = 0; col < 6; col++) {
	// 		printf("%s ", nums[row][col]);
	// 	}
	// 	printf("}\n");
	// }

	int filetomake = open("newfile.csv", O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0644);
	int yearn;
	int popn;
	char boron[5][15];
	char * space = malloc(1);
	space[0] = '\n';
	struct pop_entry * new_entry;
	for (i = 0; i < 5; i++) {
		strcpy(boron[i], nums[0][i+1]);
	}
	for (i = 1; i < 25; i++) {
		yearn = atoi(nums[i][0]);
		for (j = 1; j < 6; j++) {
			popn = atoi(nums[i][j]);
			new_entry = make_entry(yearn, popn, boron[j-1]);
			write(filetomake, &(new_entry->year), 4);
			write(filetomake, &(new_entry->population), 4);
			write(filetomake, &(new_entry->boro), 15);
			write(filetomake, space, 1);
		}
	}

	// int tempfile = open("newfile.csv", O_RDONLY);
	// char * s = malloc(5);

}

void read_data() {

	int file = open("newfile.csv", O_RDONLY);
	struct stat * s;
	stat("newfile.csv", s);
	int size = (s->st_size)/23;
	struct pop_entry * retarr[size];
	int yearn;
	int popn;
	char * boron = malloc(15);
	// while()

}

int main(int argc, char *argv[]) {

	read_csv();
	return 0;

}
