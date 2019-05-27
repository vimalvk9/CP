#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j;
	cin >> n;

	int arr[n];
	
	for(i=0;i<n;i++) cin >> arr[i];

	cin >> k;

	int max_num = 0, win_max_num = 0;
	
	for(i=0;i<k;i++)
		max_num = max(max_num,arr[i]);

	win_max_num = max_num;

	cout << win_max_num << " ";

	for(i=k;i<n;i++)
	{
		if(win_max_num == arr[i-k])
		{
			max_num = 0;
			j = i-k+1;
			int x = k;

			while(x--){
				max_num = max(max_num,arr[j]);
				j++;
			}
			
			win_max_num = max_num;

			cout << win_max_num << " ";
		}
		else
		{
		     win_max_num = max(win_max_num,arr[i]);
		     cout << win_max_num << " ";	
		}
	}

	cout << "\n";
	return 0;	
}