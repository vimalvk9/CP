#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int l;
		int ct = 0;
		string s;
		cin >> l >> s;

			cout << l/2 << "\n";
		


		/*int c_o = 0 , c_e = 0,i;
		
		for(i=0;i<l;i++)
		{
			if(s[i] == '1')
			{
				if(i%2 == 0)
					c_e++;
				else
					c_o++;
			}	
		}

		if(c_e >= c_o)
		{
			for(i=0;i<l;i+=2)
			{
				if(s[i] == '0' && i+1 < l && s[i+1] == '0' )
					{
						s[i] = '1';
						ct++;
					}
			}

			if(s[l-2] == '0' && s[l-1] == '0')
				ct++;
		}
		else
		{
			for(i=1;i<l;i+=2)
			{
				if(s[i] == '0' && i+1 < l && s[i+1] == '0')
					{
						s[i] = '1';
						ct++;
					}
			}
		}*/

		//cout << ct << "\n";
	}
}