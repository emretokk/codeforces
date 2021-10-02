#include <bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin >> n;
	bool hard = false;
	int answers[n];
	for (int i=0;i<n;i++)
	{
		cin >> answers[i];
	}
	for (int i=0;i<n;i++)
	{
		if (answers[i] == 1)
		{
			hard = true;
		}
	}
	if (hard)
	{
		cout << "HARD";
	}
	else{
		cout << "EASY";
	}
	return 0;
}
