#include <iostream>
using namespace std;
int main ()
{
	int i, num, ans = 15;
	while (cout << "�п�J�@�Ӿ�� ", i = 0, cin >> num)
	{
		i++;
		if (num == ans)
			cout << "�q��F�I�u�F�`�I" << endl;
		else if (num < ans)
			cout << "�ƭȤӤp�A�ЦA��J�@��" << endl;
		else if (num > ans)
			cout<< "�ƭȤӤj�A�ЦA��J�@���I" << endl;

		cout << "�z�@�q�F " << i << " ��" << endl;
	}
	return 0;
}
