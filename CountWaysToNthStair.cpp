#include <iostream>
using namespace std;

const long int N = 1000000007;

int main()
{
	int t;
	int n;

	cin >> t;
	while(t--)
	{
		cin >> n;
		int dp[n+1],i;

		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;

		for(i=3;i<=n;i++) dp[i] = (dp[i-2]%N + dp[i-1]%N)%N;
		cout << dp[n]%N << "\n";	

	}
}