#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,i;
		cin >> n;

		int att[n], def[n];

		for(i=0;i<n;i++) cin >> att[i];
		for(i=0;i<n;i++) cin >> def[i];
		
		int ans = -1;

		for(i=0;i<n;i++)
		{
			int a_sum = 0;
			a_sum = att[(i+n+1)%n] + att[(i+n-1)%n];

			if(def[i] > a_sum)
				ans = max(ans,def[i]);
		}

		cout << ans << "\n";


	}
}