#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,l;
	cin >> n >> l;
	int a[n];
	for (int i=0;i<n;++i) { int temp; cin >> temp; a[i] = temp; }
	sort(a , a + n);
	
	
	std::vector<int> v;

	for (int i=0; i<n-1; i++)
	{
		v.push_back(a[i+1] - a[i]);
	}

	float maxbetween=0;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		if (*i >= maxbetween)
		{
			maxbetween = *i;
		}
	}

	cout << fmax((float)maxbetween/2, fmax((float) a[0], (float) l-a[n-1]));

	return 0;
}