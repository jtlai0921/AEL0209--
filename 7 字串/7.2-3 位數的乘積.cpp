#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int n, value;
	string str;
	cout << "��J��Ƶ��� ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "��J�� " << i + 1 << " ����� ";
		cin >> str;
		value = 1;
		for (int j = 0; j < str.length(); j++)
			value *= (str[j] - '0');
		cout << "���n�� " << value << endl;
	}
	return 0;
}
