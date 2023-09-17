#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

int gcd (int a, int b)
{
    while (b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    if (b == 0) return a;
}

int countNumber (int n)
{
	int count = 0;
	while (n)
	{
		n/=10;
		count ++;
	}
	return count;
}

int  main ()
{
	unsigned int testCase, x, y, z, n;
	cin >> testCase;
	for (int i = 1; i <= testCase; i++)
	{
		cin >> x >> y >> z >> n;
        int gcd1 = gcd (x, y);
        int lcm1 = (x * y) / gcd1;
        int gcd2 = gcd (lcm1, z);
        int lcm2 = (lcm1 * z) / gcd2;
        if (countNumber(lcm2) > n) cout << -1 << endl;
        else if (countNumber(lcm2) == n) cout << lcm2 << endl;
        else if (countNumber (lcm2) < n)
        {
        	int tmp = lcm2, i = 1;
        	while (countNumber (tmp) < n)
        	{
        		tmp = (tmp / i) * (i + 1);
        		i++;
			}
			lcm2 *= i;
			cout << lcm2 << endl;
		}
	}
}