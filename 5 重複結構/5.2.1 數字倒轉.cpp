#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "��J�@�ӥ���� ";
	cin >> n;
	cout << "���઺�ƭȬ� ";
	while (n > 0) 
	{
		cout << n % 10;
		n /= 10;
	}
	cout << endl;

	return 0;
}
