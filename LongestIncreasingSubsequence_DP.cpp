#include <iostream>
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

		int X[n]={1};
		int ans=-1;
		int j;

		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(arr[j]<arr[i])
				{
					X[i] = max(X[i],X[j]+1);
					ans = max(ans,X[i]);
				}
			}
		}

		cout << ans << "\n";	
	}
}