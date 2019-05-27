#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int t,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		n--;

		int rem = n%26;
		ll p = n/26;

		if(rem < 2)
		{
			
			ll v = (long long)pow(2,p);
			cout << v << " " << "0" << " " << "0\n";
		}
		else
		{
			if(rem < 10)
			{
				ll v = (long long) pow(2,p);
				cout << "0" << " " << v << " " << "0\n";
			}
			else
			{
				ll v = (long long) pow(2,p);
				cout << "0 " << "0 " << v << "\n";
			}
		}
	}
}