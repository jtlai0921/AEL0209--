#include <iostream>
#include <climits>
using namespace std;
int main ()
{
	int n, count = 1, sum = 0;
	int Max = INT_MIN, Min = INT_MAX;

	do {
		cout << "��J�� " << count << " �Ӿ�� ";
		cin >> n;
		Max = (Max < n) ? n : Max;
		Min = (Min > n) ? n : Min;
		sum += n;
		count++;
	} while (count <= 5);

	cout << "�̤j�� " << Max << endl << "�̤p�� " << Min << endl
		  << "������ " << sum / 5.0 << endl;

	return 0;
}
