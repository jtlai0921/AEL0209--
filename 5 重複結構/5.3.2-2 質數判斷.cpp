#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, root, i, prime = 1;
	cout << "��J�@�Ӿ�� ";
	cin >> n;

	root = sqrt(n);
	for (i = 2; i <= root; i++)
		if (n % i == 0)	{
			prime = 0;
			break;
		}
	cout << n;
	prime ? cout << "�O���" : cout << "���O���";
	return 0;
}
