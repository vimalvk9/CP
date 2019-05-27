#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	int h1,h2,m1,m2;
	cin >> s1 >> s2;

	h1 = (s1[0]-48)*10 + s1[1]-48;
	h2 = (s2[0]-48)*10 + s2[1]-48;
	m1 = (s1[3]-48)*10 + s1[4]-48;
	m2 = (s2[3]-48)*10 + s2[4]-48;

	if(h1 == h2)
		cout << h1+(m1+m2)/60 << ":" << ((m1+m2)%60)/2 << "\n";

}