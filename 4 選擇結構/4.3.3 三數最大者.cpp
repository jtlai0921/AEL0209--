#include <iostream>
using namespace std;
int main()
{
	int a, b, c, max, min;
	cout << "��J�T�Ӿ�� ";
	cin >> a >> b >> c;
	if (a > b && a > c)
		max = a;
	else if (b > c)
	 	max = b;
	else
	 	max = c;
	if (a < b && a < c) 
		min = a;
	else if (b < c)
	 	min = b;
	else
	 	min = c;
	cout << a << ", " << b << ", " << c << " �T�Ƥ��̤j�Ƭ� " << max
	     << " �̤p�Ƭ� " << min << endl;
	return 0;
}
