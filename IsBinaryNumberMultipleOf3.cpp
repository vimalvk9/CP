#include <iostream>
using namespace std;

int main()
{
	int t,i;
	string s;

	cin >> t;
	while(t--)
	{
		cin >> s;

		int r=0;
		for(i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='0')
			{
				r = (2*r)%3;
			}
			else
				r = (2*r+1)%3;
		}

		if(r%3 == 0)
			cout << "1\n";
		else
			cout << "0\n";
	}

}	