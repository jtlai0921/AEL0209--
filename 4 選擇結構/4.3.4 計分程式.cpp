#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "��J�����D�� ";
	cin >> n;
	cout << "�o�� ";
	if (n >= 1 && n <= 10)
		cout << n * 6;
	else if (n >= 11 && n <= 20)
		cout << (n - 10) * 2 + 60;
	else if (n >= 21 && n <= 40)
		cout << (n - 20) + 80;
	else
		cout << 100;
	return 0;
}
