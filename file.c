#include "file.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

struct pop_entry * make_entry(int y, int p, char c[15]) {

	struct pop_entry * new_struct = malloc(sizeof(struct pop_entry *));
	new_struct->year = y;
	new_struct->population = p;
	strcpy(new_struct->boro, c);

}

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
	int filetoread = open("nyc_pop.csv", O_RDONLY, 0);
	void * ptr;
	read(filetoread,ptr,51);
	struct pop_entry *** retarr = malloc((sizeof(struct pop_entry) * 5) * 23);
	char * yearnum;
	int yearn;
	char * popnum;
	int popn;
	int i;
	int j;
	// for (i = 0; i < 23; i++) {
	// 	read(file, yearnum, 4);
	//
	// }

	//first row;
	i = 0;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//second row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	//Queens;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//third row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//fourth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//fifth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//sixth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//seventh row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 4);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//eigth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//ninth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//tenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//eleventh row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//twelvth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//thirteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 5);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//fourteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//fifteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//sixteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//seventeenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//eigteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//ninteenth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//twentieth row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//twentyfirst row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//twentysecond row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

	//twentythird row
	i++;
	j = 0;
	read(filetoread, yearnum, 4);
	yearn = atoi(yearnum);
	read(filetoread,ptr,1);
	//Manhattan;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Manhattan");
	j++;
	read(filetoread,ptr,1);
	//Brooklyn;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Brooklyn");
	j++;
	read(filetoread,ptr,1);
	//Queens;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Queens");
	j++;
	read(filetoread,ptr,1);
	//Bronx;
	read(filetoread, popnum, 7);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Bronx");
	j++;
	read(filetoread,ptr,1);
	//Staten Island
	read(filetoread, popnum, 6);
	popn = atoi(popnum);
	retarr[i][j] = make_entry(yearn, popn, "Staten Island");
	read(filetoread,ptr,1);

}

int main(int argc, char *argv[]) {

	return 0;

}
