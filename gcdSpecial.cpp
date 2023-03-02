#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int gcd (long long x, long long y)
{
	while (x ^=y ^=x ^=y %=x);
	return y;
}

int main ()
{
	string a;
	int testCase, x, y;
	cin >> testCase;
	for (int i = 1; i <= testCase; i ++)
	{
		cin >> a >> x >> y;
		string p0 = a, q0 = a;
		
		for (int i = 1; i < x; i++)
		{
			p0 += a;
		}

		
		for (int i = 1; i < y; i++)
		{
			q0 += a;
		}
		
		long long p;
		stringstream stn1 (p0);
		stn1 >> p;

		long long q;
		stringstream stn2 (q0);
		stn2 >> q;
		
		cout << gcd (p, q) << endl;
	}
}
