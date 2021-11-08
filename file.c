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
	struct stat * s = malloc(sizeof(struct stat));
	stat("nyc_pop.csv", s);
	char * unfun = malloc(s->st_size);
	read(filetoread, unfun, s->st_size);

	printf("reading nyc_pop.csv\n");

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
			strncat(temps, tempc, 1);
		}
		if (tempc[0] == ',') {
			// printf("%d\n", 5);
			strncpy(&nums[i][j][0], temps, 15);
			j++;
			// printf("%s.\n", temps);
			temps[0] = '\0';
		}
		if (tempc[0] == '\n') {
			// printf("%d\n", 7);
			strncpy(&nums[i][j][0], temps, 15);
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

	int filetomake = open("newfile.data", O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0644);
	int yearn;
	int popn;
	char boron[5][15];
	char * space = malloc(1);
	space[0] = '\n';
	// struct pop_entry * new_entry;
	for (i = 0; i < 5; i++) {
		strcpy(boron[i], nums[0][i+1]);
	}
	for (i = 1; i < 25; i++) {
		yearn = atoi(nums[i][0]);
		for (j = 1; j < 6; j++) {
			popn = atoi(nums[i][j]);
			// new_entry = make_entry(yearn, popn, boron[j-1]);
			struct pop_entry new_entry;
			new_entry.year = yearn;
			new_entry.population = popn;
			strncpy(new_entry.boro, boron[j-1], 15);
			// write(filetomake, &(new_entry->year), 4);
			// write(filetomake, &(new_entry->population), 4);
			// write(filetomake, &(new_entry->boro), 15);
			// write(filetomake, space, 1);
			write(filetomake, &new_entry, sizeof(struct pop_entry));
		}
	}

	printf("wrote %ld bytes\n", s->st_size);

	// int tempfile = open("newfile.data", O_RDONLY);
	// char * s = malloc(5);

	close(filetoread);
	close(filetoreadtwo);
	close(filetomake);

}

void read_data() {

	int file = open("newfile.data", O_RDONLY, 0);
	struct stat * s = malloc(sizeof(struct stat));
	stat("newfile.data", s);
	int size = (s->st_size)/sizeof(struct pop_entry);
	struct pop_entry retarr[size];
	read(file, retarr, s->st_size);
	int i = 0;
	while (i < size) {
		printf("%d: 	year: 	%d	boro: %s		pop: 	%d\n", i, retarr[i].year, retarr[i].boro, retarr[i].population);
		i++;
	}
	printf("\n");
	close(file);

}

void add_data() {

	int * yeartoadd = malloc(4);
	int * poptoadd = malloc(4);
	char * borotoadd = malloc(15);
	char data[256];
	printf("please give a valid year:\n");
	// read(STDIN_FILENO, &data, sizeof(data));
	// sscanf(data, "%d\n", yeartoadd);
	fgets(data, sizeof(data), stdin);
	*yeartoadd = atoi(data);
	printf("please give a valid population:\n");
	// read(STDIN_FILENO, &data, sizeof(data));
	// sscanf(data, "%d\n", poptoadd);
	fgets(data, sizeof(data), stdin);
	*poptoadd = atoi(data);
	printf("please give a valid borough:\n");
	read(STDIN_FILENO, &data, sizeof(data));
	sscanf(data, "%s\n\n", borotoadd);
	struct pop_entry temp;
	temp.year = *yeartoadd;
	temp.population = *poptoadd;
	strncpy(temp.boro, borotoadd, 15);
	int file = open("newfile.data", O_WRONLY | O_APPEND | O_CREAT);
	void * ptr;
	struct stat * s;
	stat("newfile.data", s);
	// read(file, ptr, s->st_size-1);
	write(file, &temp, sizeof(struct pop_entry));
	printf("appended to file: \nyear: 	%d	boro: %s		pop: 	%d\n\n", temp.year, temp.boro, temp.population);
	close(file);

}

void update_data() {

	int file = open("newfile.data", O_RDONLY, 0);
	struct stat * s = malloc(sizeof(struct stat));
	stat("newfile.data", s);
	int size = (s->st_size)/sizeof(struct pop_entry);
	struct pop_entry retarr[size];
	read(file, retarr, s->st_size);

	int entrynum;
	int * yeartoadd = malloc(4);
	int * poptoadd = malloc(4);
	char * borotoadd = malloc(15);
	char data[256];
	printf("what entry should be updated?: \n");
	// read(STDIN_FILENO, &data, sizeof(data));
	// sscanf(data, "%d\n", entrynum);
	fgets(data, sizeof(data), stdin);
	entrynum = atoi(data);
	printf("please give a valid year:\n");
	read(STDIN_FILENO, &data, sizeof(data));
	sscanf(data, "%d\n", yeartoadd);
	printf("please give a valid population:\n");
	read(STDIN_FILENO, &data, sizeof(data));
	sscanf(data, "%d\n", poptoadd);
	printf("please give a valid borough:\n");
	read(STDIN_FILENO, &data, sizeof(data));
	sscanf(data, "%s\n\n", borotoadd);
	retarr[entrynum].year = *yeartoadd;
	strncpy(retarr[entrynum].boro, borotoadd, 15);
	retarr[entrynum].population = *poptoadd;

	int file2 = open("newfile.data", O_WRONLY | O_TRUNC, 0);
	write(file2, &retarr, sizeof(retarr));
	printf("file updated\n");

	close(file);
	close(file2);

}

int main(int argc, char *argv[]) {

	// read_csv();
	// read_data();
	// add_data();
	// read_data();
	// update_data();
	// read_data();
	return 0;

}
