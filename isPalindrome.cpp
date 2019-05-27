#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string &s,int i,int j)
{
	if(i >= j)
		return true;
	
	else
	{
		if(s[i] == s[j])
			return isPalindrome(s,i+1,j-1);
		else
			return false;
	}
}

int main()
{
	string s;
	cin >> s;

	cout << isPalindrome(s,0,s.size()-1) << "\n";
}