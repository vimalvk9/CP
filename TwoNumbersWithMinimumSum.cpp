#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];
		int sum = 0,ans = 0,x=0;

		for(i=0;i<n;i++)
			cin >> arr[i];
		
		if(n >= 2)
		{	
			sort(arr,arr+n);
			sum = arr[0] + arr[n-1]; 
			ans = sum;		
			int l,r;
			l = 0, r = n-1;

			while(l < r)
			{
				x = arr[l]+arr[r];
				if(abs(x) < abs(sum))
					sum = x;
				if(x < 0)
					l++;
				else
					r--;
			} 

			cout << sum << "\n";
		}
		else
			cout << arr[0] << "\n";
	}
}
