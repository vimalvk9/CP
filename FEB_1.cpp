#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
	ull t,n,a,b,k,i;
	cin >> t;

	while(t--)
	{
		cin >> n >> a >> b >> k;
		ull d_a = 0, d_b = 0, su = 0, g,l,d_both;

		g = __gcd(a,b);
		l = (a*b)/g;

		d_both = n/l;
		d_a = n/a - d_both;	
		d_b = n/b - d_both;

		ull sum = d_a + d_b ;

		if(sum >= k)
			cout << "Win\n";
		else
			cout << "Lose\n";	 
		
	}
}
