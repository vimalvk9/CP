#include <iostream>
using namespace std;

int main()
{
	int t,n,m;
	cin >> t;

	while(t--)
	{
		cin >> n ;
		n = n+1;

		long rec = (n*(n-1))/2 * (n*(n-1))/2;
		long sq = 0,i;

		for(i=1;i<n;i++)
			sq += i*i;


		cout << rec-sq << "\n";
	}
}