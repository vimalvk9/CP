#include <iostream>
using namespace std;

int main()
{
	long t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];
		int j;

		for(i=0;i<n;i++) cin >> arr[i];

		int L[n]={0}, R[n]={0};

		L[0] = R[n-1] = 0;
		for(i=1;i<n;i++)
			L[i] = L[i-1] + arr[i-1];

		for(j=n-2;j>=0;j--)
			R[j] = R[j+1] + arr[j+1];	  	

		bool flag = false;
		for(i=0;i<n;i++)
		{
			if(L[i] == R[i]){flag= true;break;}
		}

		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}

}