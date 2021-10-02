#include <bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin >> n;
	int giveto[n],takefrom[n];
	for (int i=0;i<n;i++)
	{
		cin >> giveto[i];
	}
	for (int i=0;i<n;i++)
	{
		takefrom[giveto[i]-1] = i+1;
	}
	for (int i=0;i<n;i++)
	{
		cout << takefrom[i]<< " ";
	}
	return 0;
}