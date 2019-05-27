#include <iostream>
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

		for(i=0;i<n;i++) cin >> arr[i];
		int j=0;
		bool flag = false;

		for(i=n-1;i>=1;i--)
		{
			if(arr[i-1] <= arr[i])
			{
				flag = true;
				j = i-1;
				break;
			}
		} 

		if(!flag)
		{
			sort(arr,arr+n);
			for(i=0;i<n;i++) cout << arr[i] << " ";
				cout << "\n";
		}
		else
		{
			int id;
			int diff = 1001;
			for(i=j+1;i<n;i++)
			{
				if(arr[i] > arr[j] && arr[i]-arr[j] < diff)
				{
					diff = arr[i]-arr[j];
					id = i; 
				}
			}

			swap(arr[j],arr[id]);
			sort(arr+j+1,arr+n);
			for(i=0;i<n;i++) cout << arr[i] << " ";
				cout << "\n";
		}
	}
} 