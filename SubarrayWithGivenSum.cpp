#include <iostream>
using namespace std;

int main()
{
	int t,n,k,i;
	cin >> t;

	while(t--)
	{
		cin >> n >> k;
		int dp[n];

		for(i=0;i<n;i++) cin >> dp[i];

		
		// Base case
		if(n == 1)
		{
			if(dp[0] == k) cout << "1 1\n";
			else
				cout << "-1\n";
		}
		else 
		{
			if(n == 2)
			{
				if(dp[0]+dp[1] == k) cout << "1 2\n";
				else
					cout << "-1\n";
			}
			else
			{	
				int a = 0, b = 1;
				int sum = dp[0]+dp[1];
				bool flag = false;

				while(a <= b && a < n && b < n)
				{
						
					if(sum < k && b+1 < n)
					{
						b++;
						sum += dp[b];						
					}
					else
					{
						if(sum == k)
						{
							flag = true;
							break;
						}
						else
						{
							sum -= dp[a];
							a++;	
						}
					}
				}

				
				if(flag && a <= b)
					cout << a+1  << " " << b+1 << "\n";	
				else
					cout << "-1\n";
			}	
		}

	}
}