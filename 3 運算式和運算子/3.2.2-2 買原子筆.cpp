#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "�Z�žǥͤH�� n = ";
	cin >> n;
    
	cout << "�һݪ��O�ά� " 
		 << (n / 12) * 50 + (n % 12) * 5 << " ��" << endl;
    
	return 0;
}
