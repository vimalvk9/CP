#include <iostream>
using namespace std;

int helper(int nums[],int N)
{
	
	if(N == 0) return 0;

	int opt[N][N];
	int i,j,k,len;

	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			opt[i][j] = -1;

	for(len=0;len<N;len++)
	{
		for(i=0;i+len<N;i++)
		{
			j = i+len;
			for(k=i;k<=j;k++)
			{
				int left_num = i==0 ? 1 : nums[i-1];
				int right_num = j==N-1 ? 1 : nums[j+1];

				int left_opt = k == i ? 0 : opt[i][k-1];
				int right_opt = k == j ? 0 : opt[k+1][j];

				opt[i][j] = max(opt[i][j],left_num*nums[k]*right_num + left_opt + right_opt);
			}
		}
	}

	return opt[0][N-1];
}	

int main()
{	
	int N = 4;
	int nums[] = {3,1,5,8};

	cout << helper(nums,N) << "\n";
} 