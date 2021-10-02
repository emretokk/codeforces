#include <bits/stdc++.h>
using namespace std;



int main(){
	int x[4],res=0;
	cin >> x[0] >> x[1] >> x[2] >> x[3];
	sort(x, x+4);
	for (int i=0;i<4;i++)
	{
		if (x[i] == x[i+1])
		{
			res++;
		}
	}
	cout << res;
	return 0;
}