#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	char op;
	cout << "�̧ǿ�J�� 1 �ӼơB�B��l�B�� 2 �Ӽ� ";
	cin >> n1 >> op >> n2;
	switch (op)
	{
	   case '+': cout << n1 + n2 << endl;
			break;
	   case '-': cout << n1 - n2 << endl;
			break;
	   case '*': cout << n1 * n2 << endl;
			break;
	   case '/': cout << n1 / n2 << endl;
			break;
	   case '%': cout << n1 % n2 << endl;
			break;
	   default: cout << "��J���~�I" << endl;
	}
	return 0;
}
