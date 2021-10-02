#include <bits/stdc++.h>
using namespace std;



int main(){
	long long int n,m,a;
	cin >> n >> m >> a;
	long long int cc =0, ec= 0;
	for (int i=n;i>0;i-=a)
	{
		cc++;
	}
	for (int i=m-a;i>0;i-=a)
	{
		ec++;
	}
	cout << cc + cc*ec;
	return 0;
}