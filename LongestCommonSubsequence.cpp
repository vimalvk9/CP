#include <iostream>
using namespace std;


int dp_solver(string s1, string s2, int n1, int n2)
{
	int i,j,dp[n1+1][n2+1]={0};


	for(i=0;i<=n1;i++)
	{
		for(j=0;j<=n2;j++)
			{
				if(i==0 || j==0)
					dp[i][j] = 0;
				else
				{
					if(s1[i-1] == s2[j-1])
						dp[i][j] = dp[i-1][j-1]+1;
					else
						dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
	}

	return dp[n1][n2];
}	

int main()
{
	int t;
	string s1,s2;
	int n1,n2;

	cin >> t;
	while(t--)
	{
		cin >> n1 >> n2;
		cin >> s1 >> s2;
		cout << dp_solver(s1,s2,n1,n2) << endl;

	}
}