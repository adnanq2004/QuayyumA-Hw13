struct pop_entry {
	int year;
	int population;
	char boro[15];
};

struct pop_entry * make_entry(int y, int p, char c[]);

struct pop_entry ** read_csv();
