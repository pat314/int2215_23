#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	for (;;)
	{
		cin >> n;
		((n>0) && !(n%5))? (cout << n/5 << endl): (cout << -1 << endl);
		if (n == -1)
		{
			cout <<"Bye";
			break;
		}
	}
	return 0;
}
