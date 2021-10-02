#include <iostream>
using namespace std;



int main(){
	int i1,i2,i3;
	cin >> i1 >> i2 >> i3;

	int arr[3] = {i1, i2, i3};

	int max = 0;

	if (i1 * i2 * i3 >= max )
	{
		max = i1 * i2 * i3;
	}
	if (i1 + i2 + i3 >= max)
	{
		max = i1 + i2 + i3;
	}
	if (i1 * i2 + i3 >= max)
	{
		max = i1 * i2 + i3;
	}
	if (i1 + i2 * i3 >= max)
	{
		max = i1 + i2 * i3;
	}
	if ((i1 + i2) * i3 >= max) 
	{
		max = (i1 + i2) * i3;
	}
	if (i1 * (i2 + i3) >= max){
		max = i1 * (i2 + i3);
	}

	cout << max;
	return 0;
}