#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void swapRow (double a[][5], int column, int n)
{
	double diem [100];
	
	for (int i = 0; i < n; i++)
	{
		diem[i] = a[i][column];
	}
	
	sort (diem, diem + n);
	
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j ++)
		{
			if (a[j][column] == diem[n - i - 1])
			{
				double tmp0, tmp2, tmp3, tmp4, tmp1;
				
				tmp0 = a[i][0];
				tmp1 = a[i][1];
				tmp2 = a[i][2];
				tmp3 = a[i][3];
				tmp4 = a[i][4];
				
				a[i][0] = a[j][0];
				a[i][1] = a[j][1];
				a[i][2] = a[j][2];
				a[i][3] = a[j][3];
				a[i][4] = a[j][4];
				
				a[j][0] = tmp0;
				a[j][1] = tmp1;
				a[j][2] = tmp2;
				a[j][3] = tmp3;
				a[j][4] = tmp4;
			}
		}
	}
}

int main()
{
    int n;
    cin >> n;
    double a [100][5];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= 4; j ++)
        {
            a [i][0] = i + 1;
            cin >> a[i][j];
            if (a [i][j] > 10 || a [i][j] < 0)
            {
            	cout << "invalid";
            	return 0;
            }
        }
    }
    
    for (int i = 0; i < n; i ++)
    {
    	a[i][1] = (a[i][2] + a[i][3] + a[i][4]) / 3.0;
	}
	
	//--------------------------------Sap xep theo diem mon Toan------------------------------------------//
    
    cout << "Theo diem mon Toan:\n"
		 << "SV Toan Ly Anh\n";
		 
	swapRow (a, 2, n);
	
    for (int i = 0; i < n; i++)
    {
    	cout << (int)a[i][0] << ' ';
    	for (int j = 2; j <= 4; j ++)
        {
        	
            cout << fixed << setprecision (1) << a[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    cout << endl;
    
    //--------------------------------Sap xep theo diem mon Anh------------------------------------------//
    
    cout << "Theo diem mon Anh:\n"
		 << "SV Toan Ly Anh\n";
		 
	swapRow (a, 4, n);
	
    for (int i = 0; i < n; i++)
    {
    	cout << (int)a[i][0] << ' ';
    	for (int j = 2; j <= 4; j ++)
        {
        	
            cout << fixed << setprecision (1) << a[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    cout << endl;
    
    //--------------------------------Sap xep theo diem trung binh------------------------------------------//
    
	cout << "Theo diem trung binh:\n"
		 << "SV TB Toan Ly Anh\n";
		 
	swapRow (a, 1, n);
	
    for (int i = 0; i < n; i++)
    {
    	cout << (int)a[i][0] << ' ';
    	for (int j = 1; j <= 4; j ++)
        {
        	
            cout << fixed << setprecision (1) << a[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    cout << endl;
}