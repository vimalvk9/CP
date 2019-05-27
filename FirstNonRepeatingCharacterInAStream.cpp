#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t,i,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		char ch;
		int j=0;
		int ct[26]={0};
		queue <char> q;

		for(j=0;j<n;j++)
		{
			cin >> ch;
			ct[ch-97]++;

			if(ct[ch-97] == 1)
			{
				q.push(ch);
				cout << q.front() << " "; 
			}
			else
			{
				while(!q.empty())
				{
					char y = q.front();
					if(ct[y-97] > 1) 
						q.pop();
					else
						break;
				}
				
				if(!q.empty())
					cout << q.front() << " ";
				else
					cout << "-1 ";
			}

		
		}
		
		cout << "\n";
		
	}
}