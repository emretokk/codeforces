#include <bits/stdc++.h>
using namespace std;

int width(int heights[], int h, int n){
	int totalwidth = 0;
	// Why doesnt work ? :(
	// for (int height : heights){
	// 	if (height > h)
	// 	{
	// 		totalwidth+=2;
	// 	}
	// 	else{
	// 		totalwidth+=1;
	// 	}
	// }
	
	for (int i=0;i<n;i++)
	{
		if (heights[i] > h)
		{
			totalwidth+=2;
		}
		else{
			totalwidth+=1;
		}
	}
	return totalwidth;
}

int main(){
	int n,h;
	cin >> n >> h;
	int heights[n];
	for (int i=0;i<n;i++)
	{
		cin >> heights[i];
	}
	cout << width(heights,h,n);
	return 0;
}