#include <iostream>
using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		long sum = 0;

		for(i=1;i<=n;i++)
			sum += i*i;
		cout << sum << "\n";
	}
}