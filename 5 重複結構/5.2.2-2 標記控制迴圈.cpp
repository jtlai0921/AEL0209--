#include <iostream>
using namespace std;
int main ()
{
	int a;
	bool replay;
	do
	{
		cout << "��J��ƭȡG";
		cin >> a;
		cout << "����Ȭ� " << ((a >= 0) ? a : -a) << endl;
		cout << "�п�� (1 : �~�� 0 : ����) ";
		cin >> replay;
	} while(replay);
	return 0;
}
