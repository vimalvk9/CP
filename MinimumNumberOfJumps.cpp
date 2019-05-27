#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];

		for(i=0;i<n;i++) cin >> arr[i];

		if(arr[0] == 0)
			cout << "-1\n";
		else
		{
			int dp[n];
			for(i=0;i<n;i++) dp[i]=INT_MAX;

			int ans = INT_MAX,j;
			dp[0]=0;
			for(i=1;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if(arr[j] >= i-j)
						dp[i] = min(dp[i],1+dp[j]);
				}
			}

			if(dp[n-1] != INT_MAX)
				cout << dp[n-1] << "\n";	
			else
				cout << "-1\n";
		}		
	}	
}