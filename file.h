struct pop_entry {
	int year;
	int population;
	char boro[15];
};

struct pop_entry * make_entry(int y, int p, char c[]);

void read_csv();

void read_data();
