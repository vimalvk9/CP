#include <iostream>
#include <limits.h> 
using namespace std;

int main()
{
	int t,i,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int dp[n];

		for(i=0;i<n;i++) cin >> dp[i];

		int max_so_far = dp[0];
		int max_ending_here = dp[0];

		for(i=1;i<n;i++)
		{
			max_ending_here = max(dp[i],max_ending_here+dp[i]);
			max_so_far = max(max_so_far,max_ending_here);
		}

		cout << max_so_far << "\n";
	}
}