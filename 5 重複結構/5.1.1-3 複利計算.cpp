#include <iostream>
using namespace std;

int main ()
{
	int y, i;
	double p, r;

	cout << "�п�J���� ";
	cin >> p;
	cout << "�п�J�~�Q�v % ";
	cin >> r;
	cout << "�п�J�~�� ";
	cin >> y;

	for (i = 0; i < y; i++)
		p = p * (1 + r / 100);
	cout << y << " �~����B�� " << p;

	return 0;
}
