#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ac=0,dc=0;
	string s;
	cin >> n >> s;
	for (char c : s){
		if (c == 'A'){
			ac++;
		}
		else{
			dc++;
		}
	}
	if (ac>dc)
	{
		cout << "Anton";
	}
	else if (dc>ac)
	{
		cout << "Danik";
	}
	else
	{
		cout << "Friendship";
	}
	return 0;
}