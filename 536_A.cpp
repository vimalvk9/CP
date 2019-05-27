#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin >> n;

	char ch[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> ch[i][j];

	int ct = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i > 0 && j > 0 && i+1 < n && j+1 < n)
			{
				if(ch[i][j] == ch[i-1][j-1] && 
				   ch[i][j] == ch[i-1][j+1] && 	
				   ch[i][j] == ch[i+1][j-1] &&
				   ch[i][j] == ch[i+1][j+1] &&
				   ch[i][j] == 'X')
					ct++;

			}
		}
	}

	cout << ct << "\n";	
}