#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;

int main ()
{
	char map1[MAX][MAX], map2[MAX][MAX];
	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map1[i][j];
		}
	}
	
	for (int i = 0 ;i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map1[i][j] == '*') map2[i][j] = '*';
			else map2 [i][j] = 48;
		}
	}
	
	for (int i = 0 ;i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map2[i][j] == '*') 
			{
				if ((i-1) >= 0 and (j-1) >= 0 and map2 [i-1][j-1] != '*')
				map2 [i-1][j-1] ++;
				if ((i-1) >= 0 and map2 [i-1][j] != '*')
				map2 [i-1][j] ++;
				if ((i-1) >= 0 and (j+1) <= n and map2 [i-1][j+1] != '*')
				map2 [i-1][j+1] ++;
				if ((j-1) >= 0 and map2[i][j-1] != '*')
				map2 [i][j-1] ++;
				if ((j-1) >= 0 and (i+1) <= n and map2 [i+1][j-1] != '*')
				map2 [i+1][j-1] ++;
				if ((j+1) <= n and map2 [i][j+1] != '*')
				map2 [i][j+1] ++;
				if ((j+1) <= n and (i+1) <= n and map2 [i+1][j+1] != '*')
				map2 [i+1][j+1] ++;
				if ((i+1) <= n and map2 [i+1][j] != '*')
				map2 [i+1][j] ++;
			}
		}
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << map2[i][j] <<' ';
		}
		cout <<endl;
	}
}