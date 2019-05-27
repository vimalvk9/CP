#include <iostream>
using namespace std;

int main()
{
	int t,n,i;
	string s;

	cin >> t;
	while(t--)
	{
		cin >> n >> ws >> s;
		int ct[26] = {0};

		for(i=0;i<s.size();i++)
			ct[s[i]-97]++;

		bool flag = false;

		for(i=0;i<s.size();i++)
		{
			if(ct[s[i]-97] == 1)
			{
				flag = true;
				cout << s[i] << "\n";
				break;
			}
		}

		if(!flag) cout << "-1\n";
	}
}