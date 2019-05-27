#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int mp[1000006];

bool cmp(int a,int b)
{
	if(mp[a] != 0 && mp[b] != 0)
		return mp[a] > mp[b];
	else
	{
		if(mp[a] == 0 && mp[b] == 0)
			return a < b;
		else
			{
				if(mp[a] == 0)
					return false;
				return true;
			}
	}
}

int main()
{
	int t,n,i,m;

	cin >> t;

	while(t--)
	{
		cin >> m >> n;
		int a[m],b[n];

		for(i=0;i<m;i++) cin >> a[i];
		for(i=0;i<n;i++) cin >> b[i];

		for(i=0;i<n;i++)
			mp[b[i]] = n-i;

		sort(a,a+m,cmp);

		for(i=0;i<m;i++) cout << a[i] << " ";
		cout << "\n";	

		for(i=0;i<n;i++) mp[b[i]] = 0;

	}

}
