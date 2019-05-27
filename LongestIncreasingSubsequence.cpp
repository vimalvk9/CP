#include <iostream>
#include <algorithm>
using namespace std;

int dp[105][105];

void init()
{
	int i,j;
	for(i=0;i<105;i++)
		for(j=0;j<105;j++)
			dp[i][j]=-1;
}

void print(int n)
{
	int i,j;
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			cout << dp[i][j];
}

int dp_solver(int arr1[], int arr2[], int n1, int n2)
{
	// Base Case
	if(n1 < 0 || n2 < 0)
		return 0;

	if(n1 == 0 || n2 == 0)
	{
		dp[n1][n2]=0;
		return dp[n1][n2];
	}

	if(dp[n1][n2] == -1)
	{
		if(arr1[n1-1] == arr2[n2-1])
			dp[n1][n2] = 1 + dp_solver(arr1,arr2,n1-1,n2-1);
		else
			dp[n1][n2] = max(dp_solver(arr1,arr2,n1-1,n2),dp_solver(arr1,arr2,n1,n2-1));
	}
	
	return dp[n1][n2];
}	


int main()
{
	int t;
	int n;

	cin >> t;
	while(t--)
	{
		cin >> n;
		int arr1[n],arr2[n];
		int i;

		for(i=0;i<n;i++)
		{ 
			cin >> arr1[i];
			arr2[i] = arr1[i];
		}

		sort(arr2,arr2+n);
		init();
		cout << dp_solver(arr1,arr2,n,n) << endl;
		//print(n);
	}
}