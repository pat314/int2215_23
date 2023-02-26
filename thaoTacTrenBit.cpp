#include <bits/stdc++.h>
using namespace std;

//Ham kiem tra mot so co la 2^n hay khong?
bool powerTwo (int x)
{
	return x && (!(x & (x - 1)));
}

int main()
{
	int x = 4, y = 7;
	
	// Kiem tra chan le
	cout << boolalpha << "y chan? " << !(y & 1) << endl;
	cout << boolalpha << "x chan? " << !(x & 1) << endl;
	
	//Nhan doi
	y = y << 1;
	cout << y << endl;
	
	//Chia doi
	x = x >> 1;
	cout << x << endl;
	
	cout << boolalpha << "x co dang 2^n khong? " << powerTwo (x) << endl;
	cout << boolalpha << "y co dang 2^n khong? " << powerTwo (y);
	
	
}
