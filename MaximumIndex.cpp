#include <iostream>
using namespace std;

int main()
{
	unsigned long long t,n,i,j;
	cin >> t;

	while(t--)
	{
		cin >> n;
		unsigned long long arr[n];

		for(i=0;i<n;i++) cin >> arr[i];

		unsigned long long L[n], R[n];

		L[0] = arr[0];
		for(i=1;i<n;++i)
			L[i] = min(L[i-1],arr[i]);

		R[n-1] = arr[n-1];
		for(i=n-2;i>=0;i--)
			R[i] = max(R[i+1],arr[i]);

		i=j=0;
		unsigned long long ans = 0;
		while(i < n && j < n)
		{
			if(L[i] <= R[j])
			{
				ans = max(ans,j-i);
				j++;
			}
			else
				i++;
		}		

		cout << ans+1 << "\n";

	}
}