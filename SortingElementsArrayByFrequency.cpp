#include <iostream>
#include <algorithm>
using namespace std;

const int N=1000;

int freq[N];

bool cmp(int a,int b)
{
	if(freq[a] != freq[b]) return freq[a] > freq[b];
	else
		return a<b;
}

int main()
{
	int t,i,n;
	cin >> t;

	while(t--)
	{
		cin >> n;
		int arr[n];

		for(i=0;i<n;i++)
		{
		 	cin >> arr[i];
			freq[arr[i]]++;
		}

		sort(arr,arr+n,cmp); 	

		for(i=0;i<n;i++)
		{
			cout << arr[i] << " ";
			freq[arr[i]]--;
		}

		cout << "\n";
	}
}