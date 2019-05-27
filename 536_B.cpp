#include <bits/stdc++.h>
using namespace std;

#define PP pair<int,int>
#define LL long long

int main()
{
	int n,m;
	cin >> n >> m;

	int count[n+1], cost[n+1];
	int i;

	for(i=1;i<=n;i++)
		cin >> count[i];

	for(i=1;i<=n;i++)
		cin >> cost[i];

	priority_queue < PP, vector<PP>, greater<PP> > pq;

	for(i=1;i<=n;i++)
		pq.push(make_pair(cost[i],i));

	int t,a;
	

	while(m--)
	{
		cin >> t >> a;
		
		long long ans = 0;

		if(a <=  count[t])
		{
			ans += 1LL*cost[t]*a;
			cout << ans << "\n";
			count[t] -= a;
		}
		else
		{
			ans += 1LL*count[t]*cost[t];
			a -= count[t];
			count[t] = 0;
			bool flag = false;

			while(!pq.empty())
			{
				while(!pq.empty() && count[pq.top().second] == 0) pq.pop();

				if(pq.empty()) break;
				
				PP b = pq.top();

				if(a <= count[b.second])
				{
					flag = true;
					ans += 1LL*a*cost[b.second];
					count[b.second] -= a;
					a = 0;
					cout << ans << "\n";
					break;
				}
				else
				{
					ans += 1LL*count[b.second]*cost[b.second];
					a -= count[b.second];
					count[b.second] = 0;
					pq.pop();
				} 
			}

			if(!flag) cout << "0\n";


		}

	} 

	return 0;
}		 