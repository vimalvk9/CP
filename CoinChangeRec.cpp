#include <iostream>
using namespace std;

int ct = 0;

void CountCoins(int S[],int m,int n) 
{	
	
	
	// Base Case
	if(n == 0) 
	{
		ct++;
		return ;
	}

	// Edge Cases
	
	// No value left
	if(n < 0) return;

	// No coins left
	if(m < 0) return;

	if(m < 0 && n >= 1)
		return ;

	// Without mth element 
	CountCoins(S,m-1,n);
	// With atleast 1 mth element
	CountCoins(S,m,n-S[m]);
}

int main()
{
	int n,m;
	cin >> n >> m;
	int S[m];

	int i;
	for(i=0;i<m;i++)
		cin >> S[i];
	CountCoins(S,m-1,n);
	cout << ct << "\n";
}