#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "�п�J a, b ���� ";
	cin >> a >> b;
	if (a % 2)
		a++;
	if (b % 2)
		b--;
	cout << "��ƶ������Ʀ@ "<< (b - a) / 2 + 1 << " ��" << endl;
    return 0;
}
