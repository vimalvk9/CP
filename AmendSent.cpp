#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t,i;
	string s;

	cin >> t;

	while(t--)
	{
		cin >> s;
		for(i=0;i<s.size();i++)
		{
			if(i==0)
				cout << (char) tolower(s[i]);
			else
				{
					if(isupper(s[i]))
						cout << " " << (char)tolower(s[i]);
					else
						cout << s[i];
				}
		}
		cout << "\n";

	}

}