#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	float height, total = 0;
	cout << "��J��l���� (m) ";
	cin >> height;
	total = height;
	if (height >= 0.5)
		do {
			height /= 2;
			total += height;
		} while (height >= 0.5);

	cout << "�̫ᰪ�׬� " << fixed << setprecision(2)
		  << total << " m" << endl;

	return 0;
}
