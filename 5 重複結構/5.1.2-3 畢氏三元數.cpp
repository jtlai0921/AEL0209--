#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, total = 0;
	cout << "�п�J�@����� ";
	cin >> n;
	for (a = 1; a <= n; a++)
		for (b = 1; b <= n; b++) 
			for (c = 1; c <= n; c++)
				if ((a * a)+(b * b) == c * c)
					if (a < b && b < c && a < c) {
						cout << a << ", " << b << ", " << c << endl;
						total++;
					}
	cout << "�p�󵥩� " << n << " ������T���Ʀ@���H�W "
		  << total << " ��" << endl;

	 return 0;
}
