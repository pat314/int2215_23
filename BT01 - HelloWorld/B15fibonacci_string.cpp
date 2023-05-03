#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string f0 = "a";
	string f1 = "b";
	string f2;
	cout << f0 << ' ' << f1 << ' ';
	for (int i = 2; i < 10; i ++)
	{
		f2 = f0 + f1;
		cout << f2 << ' ';
		f0 = f1; f1 = f2;
	}
}
