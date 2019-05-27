#include <iostream>

using namespace std;

int main()
{
	int t,n,i;
	cin >> t;

	while(t--)
	{
		cin >> n;

		int a,b,c,x;
		a=b=c=0;

		for(i=0;i<n;i++)
		{
			cin >> x;
			if(x == 0) a++;
			else
			{
				if(x == 1) b++;
				else c++;
			}
		}

		for(i=0;i<a;i++) cout << "0 ";
		
		for(i=0;i<b;i++) cout << "1 ";
		
		for(i=0;i<c;i++) cout << "2 ";	
		cout << "\n";	
	}
}