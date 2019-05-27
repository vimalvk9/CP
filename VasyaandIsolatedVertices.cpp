#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll n,m;
	cin >> n >> m;


	if(m >= n/2 && n%2 == 0)
		cout << "0 ";
	else
	{
		if(n-2*m >= 0)
			cout << n-2*m << " ";
		else
			cout << "0 ";
	}

	if(m <= n/2)
		cout << n - (2*m-m+1) <<"\n";
	else
	{
		if(m >= n)
			cout << "0\n";
		else
			cout << n-m << "\n";
	}
		
	return 0;
}