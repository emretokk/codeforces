#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,a1[102],a2[102],p1,p2;
	cin >> n;
	cin >> p1;
	for (int i=0;i<p1;i++)
	{
		cin >> a1[i];
	}
	cin >> p2;
	for (int i=0;i<p2;i++)
	{
		cin >> a2[i];
	}

	int canpass = 0;
	for (int i=1;i<=n;i++)
	{
		bool pass=false;
		for (int j=0;j<p1;j++)
		{
			if (a1[j] == i)
			{
				pass = true;
			}
		}
		for (int j=0;j<p2;j++)
		{
			if (a2[j] == i)
			{
				pass = true;
			}
		}
		if (pass == true)
		{
			canpass = 1;
			continue;
		}
		else{
			canpass = 0;
			break;
		}
	}
	if (canpass == 1) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}