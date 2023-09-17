#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp (int a, int b) {return (a > b);}

vector<int> cutTheSticks(vector<int> arr) {
    vector <int> result;
    while (arr.size())
    {
        int n = arr.size();
        int count = 0;
        sort(arr.begin(), arr.end(), comp);
        while (arr[n-1] == 0) 
        {
            arr.pop_back();
            n--;
        }
        for (int i = 0; i < n; i++) 
        {
            count++;
            arr[i] -= arr[n-1];
        }
        if (count) result.push_back(count);
    }
    return result;
}

int main ()
{
	const int n = 8;
	int myints[n] = {1, 2, 3, 4, 3, 3, 2, 1};
	vector <int> arr (myints, myints + n);
	vector <int> result;
	result = cutTheSticks (arr);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << ' ';
	}
	return 0;
}