#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;
int main()
{
    int n, a[MAX];
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int i = 0, flag = 0, length = 0, lengthMax = 0;
  
    while (i < n)
    {
        bool test = true;
            for (int j = flag; j <= i; j ++)
            {
                if (abs (a[i] - a[j]) > 1) 
                {
                    test = false;
                    break;
                }
            }
            if (test == true) 
			{
				length ++;
				i++;
            	
			}
            else
            {
            	flag = i;
                length = 0;
            }
			//cout<<length<<" ";
            if (lengthMax < length) lengthMax = length;
    }
    
    cout<<lengthMax;
    return 0;
}