#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int t;
	string a,b;

	cin >> t;
	while(t--)
	{
		cin >> a ;
		string x;
		stack <string> st;

		int i,j;
		i=j=0;

		for(i=0;i<a.size();i++)
		{
			if(a[i] == '.')
			{
				x = a.substr(j,i-j);
				st.push(x);
				j=i+1;
			}
		}
		x = a.substr(j,a.size()-j);
		st.push(x);

		while(!st.empty())
		{
			if(st.size() != 1)
				cout << st.top() << ".";
			else
				cout << st.top();

			st.pop();
		}
		cout << "\n";
	}
}