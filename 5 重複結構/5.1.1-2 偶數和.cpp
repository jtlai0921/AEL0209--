#include <iostream>
using namespace std;
int main ()
{
	int a, b, sum = 0;
	cout << "輸入兩整數 ";
	cin >> a >> b;
	for (int i = a ; i <= b ; i++)
	 	if (!(i % 2)) sum += i;
	cout << "兩整數間的偶數和為 " << sum;

	return 0;
}
