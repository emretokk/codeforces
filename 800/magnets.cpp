#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,bp=0;
	cin >> n;
	int magnets[n];
	for (int i=0;i<n;i++)
	{
		cin >> magnets[i];
	}
	for (int i=0;i<n-1;i++)
	{
		if (magnets[i] != magnets[i+1])
		{
			++bp;
		}
	}
	cout << bp+1;
	return 0;
}