#include <iostream>
using namespace std;
int main()
{
	int a[6];
	int i, sum = 0;
	for (i = 0; i < 6; i++)
	{
		cout << "��J " << i + 1 << " �����Z "; cin >> a[i];
		sum += a[i];
	}
	cout << "�`���Z�� " << sum << endl;
	cout << "������ " << (float)sum / 6 << endl;
	return 0;  	
}
