#include <bits/stdc++.h>
using namespace std;

long helper(long arr[],long l,long h,long x,long n)
{
	if(l <= h)
	{
		long mid = (l+h)/2;

		if(arr[mid] == x)
			return mid;
		else
		{
			if(arr[mid] > x)
				helper(arr,0,mid-1,x,n);
			else
			{
				if(mid+1 < n && arr[mid+1] > x)
					return mid;
				else
					helper(arr,mid+1,h,x,n);
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		long n,x,i;
		cin >> n >> x;

		long arr[n];
		for(i=0;i<n;i++) cin >> arr[i];

		if(arr[0] > x) cout << "-1\n";
		else
		{
			if(arr[n-1] < x)
				cout << arr[n-1] << "\n";
			else
				cout << helper(arr,0,n-1,x,n) << "\n";
		}	
	}
}
