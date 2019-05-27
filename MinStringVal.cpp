#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int cmp(int a,int b) 
{ 
	return a>b; 
} 

int main()
{
	int t,i,k;
	string s;

	cin >> t;

	while(t--)
	{
		cin >> s >> ws >> k;
		int ct[26] = {0};
		int n = s.size();

		for(i=0;i<n;i++)
		{
			ct[s[i]-'a']++;
		}


		sort(ct,ct+n,cmp);

		// for(i=0;i<26;i++)
		// 	cout << ct[i] << " ";
		// cout << "\n";

		i=0;
		while(k)
		{
			if(k > ct[i])
			{
				k -= ct[i];
				ct[i] = 0;
				i++;
			}
			else
			{
				ct[i] -= k;
				k = 0;
				break;
			}
		}

		long ans = 0;
		for(i=0;i<26;i++)
			ans += ct[i]*ct[i];
		
		cout << ans << "\n";
	}
}