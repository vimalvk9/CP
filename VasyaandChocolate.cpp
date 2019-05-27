#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ll s,a,b,c;
		cin >> s >> a >> b >> c;
		
		ll x = (s/(a*c))*b;
		ll y = s/c;
		cout << x+y << "\n";
	}
}