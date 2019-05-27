#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t,n;
	string s;

	cin >> t;

	while(t--)
	{
		cin >> s;
		map <char,int> mp;
		int i;

		for(i=0;i<s.size();i++)
			mp[s[i]]++;

		for(i=0;i<s.size();i++)
		{
			if(mp[s[i]])
			{
				cout << s[i];
				mp[s[i]] = 0;
			}
		}
		cout << "\n";
	}
}