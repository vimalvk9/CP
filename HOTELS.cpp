#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	int i,j;
	int max_sum = 0, cur_sum = 0;
	bool flag = false;

	cin >> n  >> m;
	int arr[n];

	for(i=0;i<n;i++)
		cin >> arr[i];

	cur_sum = arr[0];
	i=0;
	max_sum = cur_sum;

	for(j=1;j<n;j++)
	{
		if(cur_sum + arr[j] > m)
		{
			while(cur_sum + arr[j] > m)
			{
				if(i >= n)
				{
					flag = true;
					break;
				}
				
				cur_sum -= arr[i];
				i++;
			}
			if(flag) break;
		}

		cur_sum += arr[j];
		max_sum = max(max_sum,cur_sum);
	}	 

	cout << max_sum << "\n";
}