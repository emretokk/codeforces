#include <bits/stdc++.h>
using namespace std;
int main(){
	string n1,n2;
	cin >> n1 >> n2;
	char s[n1.length()];
	for(int i=0; i<n1.length(); i++){
		if (n1[i] == n2[i])
		{
			s[i] = '0';
		}
		else{
			s[i] = '1';
		}
	}
	for (int i=0;i<n1.length();i++)
	{
		cout << s[i];
	}
	return 0;
}