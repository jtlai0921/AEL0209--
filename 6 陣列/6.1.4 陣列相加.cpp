#include <iostream>
using namespace std;

int main ()
{
	int n = 8;
	int a[n] = {7, 8, 4, 1, 3, 5, 9, 2};
	int b[n] = {-2, 0, 5, -1, 3, 8, -8, 9};
	int c[n], i;

	for ( i = 0; i < n; i++ )
		c[i] = a[i] + b[i];
	 
	cout << "�}�C a + �}�C b �����G�� ";
	for ( i = 0; i < n; i++ )
		cout << c[i] << " "; 
	cout << endl;
	
	return 0;
}
