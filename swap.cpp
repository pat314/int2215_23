#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x = 25, y = 10;
	y ^= x; x ^=y; y ^= x;
	cout << x << ' ' << y;
}
