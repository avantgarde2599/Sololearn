#include <iostream>
using namespace std;

int main() {
	int bus_max = 50;
	int passengers;
	int last_bus;
	int free_places;
	cout << "Enter the number of passengers: ";
	cin >> passengers;
	last_bus = passengers % bus_max;
	cout << "Last bus will take " << last_bus << " passengers." << endl;
	free_places = bus_max - last_bus;
	cout << free_places << " free seats will remain." << endl;
	return 0;
}