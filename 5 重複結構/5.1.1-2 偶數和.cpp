#include <iostream>
using namespace std;
int main ()
{
	int a, b, sum = 0;
	cout << "��J���� ";
	cin >> a >> b;
	for (int i = a ; i <= b ; i++)
	 	if (!(i % 2)) sum += i;
	cout << "���ƶ������ƩM�� " << sum;

	return 0;
}
