#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "�п�J��Ӿ�� ";
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "��Ӿ�ƥ洫�� a = " << a << "\tb = " << b << endl;
	return 0;
}
