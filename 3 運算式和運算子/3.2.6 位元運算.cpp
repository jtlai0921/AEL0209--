#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "��J��Ӿ�ơG";
	cin >> hex >> a >> b;
	cout << hex << a << " & " << b << "= " << (a & b) << endl
		  << a << " | " << b << "= " << (a | b) << endl
		  << a << " ^ " << b << "= " << (a ^ b) << endl
		  << "~" << a << " = " << (~a) << endl
		  << "~" << b << " = " << (~b) << endl;
	return 0;
}
