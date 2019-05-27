#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x,i;
	cin >> t;

	while(t--)
	{
		cin >> n >> x;
		int mp[2000] = {0};
		bool check[2000] = {false}; 
		int arr[n];

		for(i=0;i<n;i++)
		{ 
			cin >> arr[i];
			mp[arr[i]]++;
		}	

		int ct = 0;
		for(i=0;i<n;i++)
		{
			if(!check[arr[i]])
			{
				if(mp[arr[i]+x])
					ct += mp[arr[i]]*mp[arr[i]+x];
				
				if(x < arr[i] && mp[arr[i]-x])
					ct += mp[arr[i]]*mp[arr[i]-x];
				
				// cout << ct << "--\n";
			}

			check[arr[i]] = true;
		}

		cout << ct/2 << "\n";
	}
}
