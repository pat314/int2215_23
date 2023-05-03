#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int day, month, year;
	cin >> day >> month >> year;
	int weekday = (day + 2 * month + (3 * (month + 1))/5 + year + (year/4))%7;
	switch (weekday)
	{
		case 0:
			cout << "Sunday";
			break;
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
	}
	return 0;
}
