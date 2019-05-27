#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long n;

	cin >> t;

	while(t--)
	{
		cin >> n;

		if(n%2 || (n&(n-1)))
		{
			cout << "-1\n";
		}
		else
		{
			int ct=0;
			while(n)
			{
				ct++;
				if(n%2 == 0)
					n /= 2;
				else
					break;
			}

			cout << ct << "\n";

		}
	}
}