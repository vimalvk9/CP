#include <iostream>
using namespace std;

int main()
{
	int t,n,i,j;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];
		
		for(i=0;i<n;i++)
			cin >> arr[i];

		int ans = -1, sum = 0;
		for(i=0;i<n;i++)
		{
			sum = 0;
			for(j=i;j<n;j++)
			{
				sum += arr[j];
				ans = max(ans,sum);
			}
		}

		cout << ans << "\n";
	}
}