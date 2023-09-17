#include <iostream>
using namespace std;

int main()
{
    int n, min_a, min_b;
    cin>>n;
    int a[1000], b[1000];
    
    for (int i = 0 ;i < n; i++)
    {
        cin>>a[i]>>b[i];
    }

    min_a = a[0];
    min_b = b[0];

    for (int i = 1 ;i < n; i++)
    {
        if (min_a > a[i]) min_a = a[i];
        if (min_b > b[i]) min_b = b[i];
    }
    
    cout<< min_a * min_b;
}