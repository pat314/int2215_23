#include <iostream>
#include <cmath>

using namespace std;

int count (int n)
{
	int c = 0;
	while (n) 
	{
		c++;
		n/=10;
	}
	return c;
}

int firstHalf (int n)
{
	int number = (count (n))/2;
	int tmp = n;
	while (number)
	{
		tmp/=10;
		number--;
	}
	return tmp;
}

int lastHalf (int n)
{
	int number = (count (n))/2;
	int dec = 1;
	while (number)
	{
		dec*=10;
		number--;
	}
	return n % dec;
	
}

int sum (int a, int b)
{
	return a + b;
}

int main ()
{
	int n;
	cin >> n;
	int tong = sum (firstHalf(n), lastHalf(n));
	cout << tong << endl;
	while (count (tong) > 1)
	{
		tong = sum (firstHalf(tong), lastHalf(tong));
		cout << tong << endl;
	}
}