#include <bits/stdc++.h>
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

		int flag = -1;

		for(i=1;i<n;i++)
		{
			if(flag == -1)
			{
				if(arr[i] > arr[i-1])
					swap(arr[i],arr[i-1]);
				flag = 1;
			}
			else
			{	
				if(arr[i] < arr[i-1])
					swap(arr[i],arr[i-1]);
				flag = -1;
			}
		} 

		for(i=0;i<n;i++) cout << arr[i] << " ";
		cout << "\n";	
	}
} 