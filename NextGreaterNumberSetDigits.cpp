#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int t,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int l = floor(log10(n))+1;
		int arr[l];
		int i=n,j=0;

		while(i)
		{
			arr[j++] = i%10;
			i /= 10;
		}

		reverse(arr,arr+l);
		next_permutation(arr,arr+l);
		int num = 0,ten=(int)pow(10,l-1);

		for(i=0;i<l;i++){
			num += arr[i]*ten;
			ten /=10;	
		}

		if(num > n)
			cout << num <<"\n";
		else
			cout << "not possible\n";
	}
}