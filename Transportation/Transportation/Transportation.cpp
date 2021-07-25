#include <iostream>
using namespace std;

int main() {
	int bus_max = 50;
	int passengers;
	int last_bus;
	int flights;
	int free_places;
	cout << "Enter the number of passengers: ";
	cin >> passengers;
	flights = passengers / bus_max;
	cout << "The bus will make " << flights << " flights." << endl;
	last_bus = passengers % bus_max;
	cout << "Last bus will take " << last_bus << " passengers." << endl;
	free_places = bus_max - last_bus;
	cout << free_places << " free seats will remain." << endl;
	system("PAUSE");
	return 0;
}
