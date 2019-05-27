#include <iostream>
using namespace std;

int dp[500][500] = {-1};

void init()
{
	for(int i=0;i<500;i++)
		for(int j=0;j<500;j++)
			dp[i][j] = -1;
}

int helper(int S[],int m,int n)
{
	if(n == 0 && m >= 0) return dp[m][n]=1;
	if(m < 0 && n > 0) return 0;
 	if(n < 0) return 0;

 	if(dp[m][n] != -1) return dp[m][n];

 	dp[m][n] = helper(S,m-1,n) + helper(S,m,n-S[m]);
 	return dp[m][n];
}

int main()
{
	int t,n,m,i;
	cin >> t;

	while(t--)
	{
		cin >> m;
		int S[m];

		

		for(i=0;i<m;i++) cin >> S[i];
		cin >> n;
		init();	
		cout << helper(S,m-1,n) << "\n";

	}
}