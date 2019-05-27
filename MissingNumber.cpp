#include <bits/stdc++.h>
using namespace std;

const int N = 20;
int arr[N][N];
int ct=0;

void rec(int arr[][N],int i, int j,int m,int n)
{
	if(i == m-1 && j == n-1)
	{
		ct++;
		return;
	}

	if(j+1 < n)
	{
		rec(arr,i,j+1,m,n);
	}

	if(i+1 < m)
	{
		rec(arr,i+1,j,m,n);
	}

}

int main()
{
	int m,n,i,j;
	cin >> m >> n;

	int k=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			arr[i][j] = k++;

	rec(arr,0,0,m,n);		 
	cout << ct << "\n";
}