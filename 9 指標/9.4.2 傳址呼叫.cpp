#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
	int a, b;
	cout << "�п�J a, b ��Ӿ�� ";
	cin >> a >> b;
	swap(&a, &b);
	cout << "��Ӿ�ƥ洫�� a = " << a << "\tb = " << b << endl;
	return 0;
}

void swap(int *i, int *j)
{
	 int temp;
	 temp = *i;
	 *i = *j;
	 *j = temp;
}
