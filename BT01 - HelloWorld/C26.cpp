#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, a[100], sum, max, min;
	double average;
	cin >> n;
	
	for (int i = 0; i < n;  i++) cin >> a[i];
	
	max = min = a[0];
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	average = (sum*1.0)/n;
	cout << "Mean: " << average << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	return 0;
}
