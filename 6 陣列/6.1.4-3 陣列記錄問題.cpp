#include <iostream>
using namespace std;
int main ()
{
	int all, n, s, i;
	int a[100] = {};
	cout << "�п�J����H�ơB���H�ơB�w��y�� ";
	cin >> all >> n;
	for (i = 1; i <= n; i++){
	  	cin >> s;
		a[ s ] = 1;
	}
	cout << "�ʮu�y�� ";
	for (i = 1; i <= all; i++)
		if (a[i] != 1) cout << i << " ";		
	return 0;
}
