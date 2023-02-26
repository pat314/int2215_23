#include <iostream>
using namespace std;

int main ()
{
	//So dia can chuyen
	int number;
	cin >> number;
	
	int x;
	for (x = 1; x < (1 << number); x++)
	{
		cout << "Buoc " << x << ": Chuyen tu cot " << (x & x - 1)%3 << " den cot " << ((x | x - 1) + 1) % 3 << endl;
	}	
}
