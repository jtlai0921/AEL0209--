#include <iostream>
using namespace std;
int main()
{
	int h, w;
	double bmi, m;
	cout << "�п�J�����]cm�^";
	cin >> h;
	cout << "�п�J�魫�]kg�^";
	cin >> w;
	m = (double) h / 100;
	bmi = w /(m * m);
	cout << "BMI = " << bmi << endl;
	return 0;
}
