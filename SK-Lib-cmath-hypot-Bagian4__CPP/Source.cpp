
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	long double x = 89.3425453435, y = 138.0987456456, hasil;

	hasil = hypotl(x, y);

	cout << "Nilai x = " << x << endl;
	cout << "Nilai y = " << y << endl;
	cout << "hypotl(x, y) = " << hasil << endl;

	_getch();
	return 0;
}
