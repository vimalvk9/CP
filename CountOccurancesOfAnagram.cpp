#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t,i,j;
	string a,b;

	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		sort(b.begin(),b.end());

		int ct=0;
		int l1 = a.size();
		int l2 = b.size();

		for(i=0;i<=l1-l2;i++)
		{
			string x = a.substr(i,l2);
			sort(x.begin(),x.end());
			if(x == b)
				ct++;
		}

		cout << ct << "\n";
	}


	
	 
}