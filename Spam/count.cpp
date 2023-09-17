#include <iostream>
using namespace std;

const int MAX = 100;

int countEven (int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (!(i & 1)) count ++;
        }
    }
    return count;
}

int main()
{
    int n, a[MAX];
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << countEven (a[i]) << endl;
    }
    return 0;
}