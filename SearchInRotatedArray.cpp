#include <iostream>

using namespace std;

long helper(long arr[],long l,long h,long x,long n)
{
	if(l <= h)
	{
		long mid = (l+h)/2;

		// Match 
		if(arr[mid] == x) return mid;

		// Not match
		// Left half is sorted 
		if(arr[l] < arr[mid])
		{
			if(x >= arr[l] && x < arr[mid])
				return helper(arr,l,mid-1,x,n);
			return helper(arr,mid+1,h,x,n);
		}
		else // Right half is sorted
		{
			if(x > arr[mid] && x <= arr[h])
				return helper(arr,mid+1,h,x,n);
			return helper(arr,l,mid-1,x,n);
		}
	}
	// If not present
	return -1;
}

int main()
{
	long t,n,i,x;
	cin >> t;

	while(t--)
	{
		cin >> n;
		long arr[n];

		for(i=0;i<n;i++) cin >> arr[i];

		cin >> x;

		cout << helper(arr,0,n-1,x,n) << "\n";	
	}
}