#include <iostream>
using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int x;
		int ans = 0;

		for(i=0;i<n;i++)
		{
			cin >> x;
			ans = ans^x;
		}
		cout << ans << "\n";

	}
}