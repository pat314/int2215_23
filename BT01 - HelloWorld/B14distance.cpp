#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x, y;
	cin >> x >> y;
	double distance = sqrt (x*x + y*y);
	cout << fixed << setprecision (4) << distance;
	return 0;
}
