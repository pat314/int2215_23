#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x, y;
	cin >> x >> y;
	
	while (x^=y^=x^=y%=x);
	
	cout << y;
}
