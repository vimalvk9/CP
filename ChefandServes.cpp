#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll t,p1,p2;
	ll k;
	cin >> t;

	while(t--)
	{
		cin >> p1 >> p2 >> k;
		
		ll sum = p1+p2;
		ll n = sum/k + 1;


		if(n%2 == 0)
			cout << "COOK\n";
		else
			cout << "CHEF\n";
	}

	return 0;
}