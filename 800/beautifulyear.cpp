#include <bits/stdc++.h>
using namespace std;



int main(){
	int y,ydigits[4];
	cin >> y;
	int tempy=y;
	int c=y;
	for (int i=3;i>=0;i--)
	{
		ydigits[i] = tempy%10;
		tempy/=10;
	}
	while(true){
		c++;
		int cdigits[4];
		bool is = true;
		int tempc=c;
		for (int i=3;i>=0;i--)
		{
			cdigits[i] = tempc%10;
			tempc/=10;
		}
		for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
			{
				if (i!=j && cdigits[i] == cdigits[j])
				{
					is = false;
				}
			}
		}
		if (is == true)
		{
			cout << c;
			break;
		}
	}
	return 0;
}