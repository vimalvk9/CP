#include<iostream>
using namespace std;

const int N = 25;
int mat[N][N];
int ct = 0;

void rec(int mat[][N],int i,int j,int m,int n)
{
	if( i == m-1 && j == n-1 )
	{
		ct++;
		return;
	}

	if(j+1 < n)
		rec(mat,i,j+1,m,n);

	if(i+1 < m)
		rec(mat,i+1,j,m,n);
}

int main()
 {
	int t,i,j,m,n;
	cin >> t;
		
	while(t--)
	{
		cin >> m >> n;
		int k=0;

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				mat[i][j] = k++;
			}
		}

		rec(mat,0,0,m,n);
		cout << ct << "\n";
		ct = 0;
	}
	return 0;
}