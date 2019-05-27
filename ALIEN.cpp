#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;


	cin >> t;

	while(t--)
	{

	long i,j,n,m;
	long cur_sum = 0, max_sum = 0, num_count = 0;
	bool flag = false;

		cin >> n >> m;
	long arr[n];
	for(i=0;i<n;i++) cin >> arr[i];

	cur_sum = arr[0];
	max_sum = cur_sum;
	i = 0;

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
		}

		if(flag) break;

		cur_sum += arr[j];
		
		if(j-i+1 >= num_count)
		{

			if(j-i+1 == num_count)
				max_sum = min(max_sum,cur_sum);	
			else
				max_sum = cur_sum;

			num_count = max(num_count,j-i+1);
			
			
		}

	} 

	cout << max_sum << " " << num_count << "\n";
}

}