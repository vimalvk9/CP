#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
	cout << n << " ";
	if(n > 0)
	{	
		helper(n-5);
		cout << n << " ";
	}
}

int main()
{
	int t,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		helper(n);
		cout << "\n";
	}
}