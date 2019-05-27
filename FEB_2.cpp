#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,n;
	string s;
	
	cin >> t;

	while(t--)
	{
		cin >> n;
		
		int ch[26] = {0};
		set < char > st;

		for(i=0;i<n;i++)
		{
			cin >> s;
			for(j=0;j<s.size();j++)
			{
				if(st.find(s[j]) == st.end())
				{
					st.insert(s[j]);
					ch[s[j]-97]++;
				}
			}
			st.clear();
		} 

		int ans=0;
		for(i=0;i<26;i++)
		{
			if(ch[i] == n)
				ans++;
		}

		cout << ans << "\n";
	}
}