#include <iostream>
using namespace std;
#define NUMBER 10

int main() {
	srand(time(0));
	int vector[NUMBER];

	int numberpositive = 0;
	int negetivenumber = 0;
	int zero = 0;

	for (int i = 0;i < NUMBER;i++) {
		vector[i] = rand() % 100 + 1;
		cout << vector[i] << " ";
	}

	for (int i = 0;i < NUMBER;i++) {
		if (vector[i] > 0) {
			numberpositive++;
		}
		else if (vector[i] < 0) {
			negetivenumber++;
		}
		else if (vector[i] == 0) {
			zero++;
		}
	}

	cout << "Positive numbers: " << numberpositive << " Negetive numbers: " << negetivenumber << " Zero: " << zero << endl;
	return 0;
}
