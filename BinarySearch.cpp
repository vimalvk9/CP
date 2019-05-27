#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int bs(int arr[],int l,int h,int x,int n)
{
	if(l <= h)
	{
		int mid = (l+h)/2;

		if(arr[mid] == x)
			return mid;

		if(arr[mid] < x)
			return bs(arr,mid+1,h,x,n);

		return bs(arr,l,mid-1,x,n);
		
	}

	return -1;
}

int main()
{
	int t,n,i,x;
	cin >> t;

	while(t--)
	{
		cin >> n >> x;

		int arr[n];
		for(i=0;i<n;i++) cin >> arr[i];

		sort(arr,arr+n);
		
		cout << bs(arr,0,n-1,x,n) << "\n";	
	}

}