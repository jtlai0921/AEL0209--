#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	double m, p;
	cout << "��J�T���ΤT��� ";
	cin >> a >> b >> c;

	if ((a + b > c) && (b + c > a) && (c + a > b))
	{
		m = 0.5 * (a + b + c);
		p = m * (m - a) * (m - b) * (m - c);
		cout << "�g�a�`���� " << p << endl;
	}
	else
    	cout << a << "," << b << "," << c 
		     << " �L�k�c���T���ΤT���" << endl;

	return 0;
}
