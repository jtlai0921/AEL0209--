#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "��J���Z ";
	cin >> score;
	switch (score) {
		case 100 .. 90:
			cout << "�u" << endl;
			break;
		case 80 ... 89 :
			cout << "��" << endl;
			break;
		case 70 ... 79 :
			cout << "�A" << endl;
			break;
		case 60 ... 69 :
			cout << "��" << endl;
			break;
		default :
			cout << "�B" << endl;
	}
	return 0;
}
