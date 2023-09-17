#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    double input, max, min;
    
    cin >> input;
    n--;
    
    max = min = input;
    
    while (n)
    {
        cin >> input;
        if (input < min) min = input;
        if (input > max) max = input;
        
        n--;
    }
    
    cout << max << endl << min;
}