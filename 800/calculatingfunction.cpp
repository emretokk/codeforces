#include <bits/stdc++.h>
using namespace std;

long long int func(long long int x){
	if (x % 2 == 0) return x/2;
	else return (x-1)/2-x;
}

int main(){
	long long int n;
	cin >> n;
	cout << func(n);
	return 0;
}