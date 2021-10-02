#include <bits/stdc++.h>
using namespace std;



int main(){
	string s;
	int lc = 0;
	cin >> s;
	for (int i=0;i<s.length();++i)
	{
		if (s[i] == 'h'){s.erase(s.begin()+0, s.begin()+i); break;}
	}
	for (int i=1;i<s.length();++i)
	{
		if (s[i] == 'e'){s.erase(s.begin()+1, s.begin()+i); break;}
	}
	for (int i=2;i<s.length();++i)
	{
		if (s[i] == 'l'){s.erase(s.begin()+2, s.begin()+i); break;}
	}
	for (int i=3;i<s.length();++i)
	{
		if (s[i] == 'l'){s.erase(s.begin()+3, s.begin()+i); break;}
	}
	for (int i=4;i<s.length();++i)
	{
		if (s[i] == 'o'){s.erase(s.begin()+4, s.begin()+i); s.erase(s.begin()+5, s.end());break;}
	}
	cout << s;
	if (s == "hello")
	{
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}