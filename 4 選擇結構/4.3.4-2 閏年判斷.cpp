#include <iostream>
using namespace std;
int main()
{
	int y;
	cout << "��J�褸�~ ";
	cin >> y;

	if (y % 400 == 0)
		cout << "�|�~" << endl;
	else if ((y % 4 == 0) && (y % 100 != 0))
		cout << "�|�~" << endl;
	else
		cout << "���~" << endl;
	return 0;
}
