#include <iostream>
using namespace std;
int main ()
{
	const int n = 50;
	char sent[n];
	int i = 0;
	cout << "��J�@�ӭ^��y�l�G ";
	cin.getline(sent, 50);
	while (sent[i])
		cout << char(toupper(sent[i++]));
}
