#include <iostream>
#include <limits.h>

using namespace std;

int vis[25][25];


void init()
{
	int i,j;
	for(i=0;i<25;i++){
		for(j=0;j<25;j++){
			vis[i][j] = 1;
		}
	}
}

bool isInside(int x,int y,int n)
{
	if(x >=1 && x <= n && y >= 1 && y <= n)
		return true;
	return false; 
}



int dfs(int n,int a,int b,int c,int d)
{

	if(!isInside(a,b,n))
		return 32764;

	if(!vis[a][b])
		return 32764; 

	vis[a][b]=0;

	if(a == c && b == d)
		return 0;
	
 	int moves=0;

	moves = 1 + dfs(n,a-2,b-1,c,d);

	moves = min(moves,1+dfs(n,a-2,b+1,c,d));

	moves = min(moves,1+dfs(n,a-1,b-2,c,d));

	moves = min(moves,1+dfs(n,a-1,b+2,c,d));

	moves = min(moves,1+dfs(n,a+1,b-2,c,d));

	moves = min(moves,1+dfs(n,a+1,b+2,c,d));

	moves = min(moves,1+dfs(n,a+2,b-1,c,d));

	moves = min(moves,1+dfs(n,a+2,b+1,c,d));
	
	return moves;

}

int main()
{
	int t,n,i,j;

	cin >> t;
	while(t--)
	{
		cin >> n;
		int a,b,c,d;
		cin >> a >> b >> c >> d;


		if(a==b && b==c)
		{
			cout << "0\n";
			continue;
		}

		init();


		cout << dfs(n,a,b,c,d);
	}
}