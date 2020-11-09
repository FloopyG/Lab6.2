#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* c, const int size, int min, int max, int i) {
	c[i] = min + rand() % (max - min + 1);
	if (i < size - 1) {
		Create(c, size, min, max, i + 1);
	}
}

void arrPrint(int* c, const int size, int i) {
	cout << setw(4) << c[i];
	if (i < size - 1)
		arrPrint(c, size, i + 1);
	else
		cout << endl;
}

int arrMaxMin(int* c, const int size, int i, int max, int min, int indexMax, int indexMin) {
	if (c[i] > max) {
		max = c[i];
		indexMax = i;
	}
	if (c[i] < min) {
		min = c[i];
		indexMin = i;
	}
	if (i < size - 1) {
		arrMaxMin(c, size, i + 1, max, min, indexMax, indexMin);
	}
	else {
		cout << indexMax << "  " << indexMin << endl;
		return 0;
	}
}




int main()
{
	srand((unsigned)time(NULL));

	const int a = 15;

	int c[a];

	int Low = 5;
	int High = 90;

	Create(c, a, Low, High, 0);
	arrPrint(c, a, 0);
	arrMaxMin(c, a, 1, c[0], c[0], 0, 0);


	system("pause");
	cin.get();
	return 0;
}
