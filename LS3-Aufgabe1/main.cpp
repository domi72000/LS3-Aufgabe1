#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	
	int anzahl = 0;
	double summe = 0;
	double max = 0;
	double min = 100;
	double mittelwert = 0;
	double sqr_sum = 0;
	double std_abw = 0;

	srand(time(NULL));

	while (true) {
		double messwert = (rand() & 10000) / 100.0;

		cout << "M:" << messwert << endl;
		anzahl++;
		summe += messwert;
		sqr_sum += messwert * messwert;

		if (max < messwert) {
			max = messwert;
		}

		if (min > messwert) {
			min = messwert;
		}

		if (_kbhit()) {
			break;
		}

		Sleep(100);

	}

	mittelwert = summe / anzahl;

	std_abw = sqrt((sqr_sum - anzahl * mittelwert * mittelwert) / ((double) anzahl - 1));

	cout << endl << "=====================" << endl << endl;

	cout << "Anzahl: " << anzahl << endl;
	cout << "Summe: " << summe << endl;
	cout << "Mittelwert: " << mittelwert << endl;
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	cout << "Standardabweichung: " << std_abw << endl;

	cout << endl << "=====================" << endl << endl;

	return 0;
}