#include <iostream>
using namespace std;

char* strcat(char*, char*);
int main ()
{
const int n = 50;
char str1[n], str2[n];
cout << "��J�@�Ӧr��G";
cin.getline(str1, n);
cout << "��J�t�@�Ӧr��G";
cin.getline(str2, n);

cout << strcat(str1, str2);
return 0;
}
char* strcat(char* s1, char* s2)
{
char* str = s1;

while (*s1)
s1++;
while (*s1++ = *s2++) ;
return str;
}
