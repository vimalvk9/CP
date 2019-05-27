#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];
		map <int,int> mp;
		

		for(i=0;i<n;i++)
		 {
		 	cin >> arr[i];
		 	mp[arr[i]]++;
		 }

		bool flag = false; 
		for(i=0;i<n;i++)
		{
			if(mp[arr[i]] > n/2)
			{
				flag = true;
				cout << arr[i] << "\n";
				break;
			}
		} 

		if(!flag) cout << "-1\n";
		
	}
}