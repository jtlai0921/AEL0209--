#include <iostream>
using namespace std;

int main()
{
	int x, y, k;
	while (cout << "�п�J���� ", cin >> x >> y)
	{
		while (x % y)
		{
			k = x % y;
			x = y;
			y = k;
		}
		cout << "�̤j���]�� = " << y << endl;
	}
	return 0;
}
