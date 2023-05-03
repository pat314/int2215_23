#include <bits/stdc++.h>
using namespace std;

int main ()
{
	double a, b, c;
	cin >> a >> b >> c;
	double s = (a +b +c)/2.0;
	cout << fixed << setprecision (2) << sqrt(s * (s-a) * (s-b) * (s-c));
	return 0;
}
