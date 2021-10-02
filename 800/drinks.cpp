#include <bits/stdc++.h>
using namespace std;



int main(){
	int n;
	double res=0;
	cin >> n;
	int p[n];
	for (int i=0;i<n;i++)
	{
		cin >> p[i];
	}
	for (int i=0;i<n;i++)
	{
		res+=p[i];
	}
	cout << (res/(n*100))*100;
	return 0;
}