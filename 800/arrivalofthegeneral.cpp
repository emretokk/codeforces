#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,time=0;
	cin >> n;
	int h[n];
	int max=0,min=110,maxi=0,mini=0;
	
	for (int i=0;i<n;++i)
	{
		int temp;
		cin >> temp;
		h[i] = temp;
	}
	for (int i=0;i<n;++i) if(h[i] >= max) max = h[i];

	for (int i=0;i<n;++i) if (h[i] == max) {maxi = i; break;}

	int maxdis = maxi;
	for (int i=0;i<maxdis;++i)
	{
		int temp = h[maxi-1];
		h[maxi-1] = h[maxi];
		h[maxi] = temp;
		maxi -=1;
		++time;
	}
	for (int i=0;i<n;++i) if(h[i] <= min) min = h[i];

	for (int i=n-1;i>=0;--i) if (h[i] == min) {mini = i; break;}
	
	int mindis = n-mini-1;
	for (int i=0;i<mindis;++i)
	{
		int temp = h[mini+1];
		h[mini+1] = h[mini];
		h[mini] = temp;
		mini+=1;
		++time;
	}

	cout << time;
	return 0;
}