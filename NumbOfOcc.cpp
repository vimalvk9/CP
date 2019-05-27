#include <bits/stdc++.h>
using namespace std;

int u_b(int arr[],int l,int h,int x,int n)
{
	if(l <= h)
	{
		int mid = (l+h)/2;

		if(arr[mid] == x)
		{
			if(mid+1 <= n && arr[mid+1] == x)
				u_b(arr,mid+1,h,x,n);
			else
			{
				if(mid+1 == n || arr[mid+1] > x)
					return mid;
			}
		}
		else
		{
			if(arr[mid] > x)
				u_b(arr,l,mid-1,x,n);
			else
				u_b(arr,mid+1,h,x,n);	
		}
	}
}


int l_b(int arr[],int l,int h,int x)
{
	if(l <= h)
	{	
		int mid = (l+h)/2;
		
		if(arr[mid] == x)
		{
			if( mid-1 >= l && arr[mid-1] == x)
				l_b(arr,l,mid-1,x);	
			else 
			{
				if( mid == 0 || arr[mid-1] < x)
				return mid;
			}		
		}
		else
		{
			if(arr[mid] < x)
				l_b(arr,mid+1,h,x);
			else
				l_b(arr,l,mid-1,x);
		}
	}
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

		int l = l_b(arr,0,n-1,x);
		
		if(arr[l] == x)
		{
			int u = u_b(arr,0,n-1,x,n);
			cout << u-l+1 << "\n";
		}
		else
			cout << "-1\n";
	}
}