#include <iostream>
using namespace std;

int main()
{
	int money;
	cout << "�п�J�ʪ����B ";
	cin >> money;
	cout << "���I���B ";

	(money >= 2000) ? cout << money * 0.9 : cout << money * 0.95;

	cout << endl;
	return 0;
}
