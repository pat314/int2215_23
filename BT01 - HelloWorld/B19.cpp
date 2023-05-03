#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x, y, z;
	cin >>x >> y >> z;
	bool check = (((x < y) && (y < z)) || ((x > y) && (y > z)));
	cout << boolalpha << check;
}
