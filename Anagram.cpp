#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin >> t;

	string a,b;

	while(t--)
	{
		cin >> a >> b;
		int ct[26] = {0};

		for(i=0;i<a.size();i++)
			ct[a[i]-97]++;
		for(i=0;i<b.size();i++)
			ct[b[i]-97]--;

		bool flag = false;
		for(i=0;i<26;i++)
		{
			if(ct[i] != 0)
			{
				flag = true;
				break;
			}
		}

		if(flag) cout << "NO\n";
		else cout << "YES\n";

	}
}