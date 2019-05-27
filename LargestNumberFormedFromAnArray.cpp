#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	int m = a;
	int n = b;
	int aa = 0, bb=0;

	while(m)
	{
		aa = aa*10 + m%10;
		m /= 10;	
	}

	while(n)
	{
		bb = bb*10 + n%10;
		n /= 10;
	}

	while(aa || bb)
	{
		return aa%10 > bb%10;
		aa /=10;
		bb /= 10;
	}

	return aa > bb;
}

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];

		for(i=0;i<n;i++) cin >> arr[i];
		sort(arr,arr+n,cmp);
		
		for(i=0;i<n;i++) cout << arr[i];
		cout << "\n";	
	}
}