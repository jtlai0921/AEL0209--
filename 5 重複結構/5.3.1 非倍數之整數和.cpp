#include <iostream>
using namespace std;
int main ()
{
	const int n = 1000;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!(i % 3) || !(i % 7))
			continue;
		sum += i;
	}
	cout << "1 �� " << n << " �D 3 �ΫD 7 �����ƪ��M�� "
		  << sum << endl;
	return 0;
}
