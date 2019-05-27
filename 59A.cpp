#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> n >> s;
	
		int l = n/2;
		bool flag = false;
		int i;

		if(n%2 == 0)
		{
			
			for(i=0;i<l;i++)
			{
				if(s[i]-48 > s[i+l])
					{
						flag = true;
						break;
					}
			}

			if(flag) cout << "NO\n";
			else
			{
				cout << "YES\n";
				for(i=0;i<l;i++)
					cout << s[i];
				cout << " ";

				for(i=l;i<n;i++)
					cout << s[i];
				cout << "\n";
			}
		}
			else
			{
				for(i=0;i<l;i++)
				{
					if(s[i]-48 > s[i+l])
					{
						flag = true;
						break;
					}
				}

			if(flag) cout << "NO\n";
			else
				{
					cout << "YES\n";
					for(i=0;i<l;i++)
						cout << s[i];
					cout << " ";

					for(i=l;i<n;i++)
						cout << s[i];
					cout << "\n";
				}
			}
		}
}
