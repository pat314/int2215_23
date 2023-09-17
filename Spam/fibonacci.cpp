#include <iostream>
using namespace std;

int main ()
{
    long long n, test;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin >> test;
        long long f0 = 0, f1 = 1, fn;

        for (int i = 2; i <= test ; i ++)
        {
            fn = f1 + f0;
            f0 = f1; f1 = fn;
        }
        cout << fn << endl;
    }
}