#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double f;
	cout << "�п�J�ؤ�׼� ";
	cin >> f;
    
	cout << "���׼Ƭ� " << fixed << setprecision(3)
		 << (f - 32) * 5 / 9 << endl;

	return 0;
}
