#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s,n;
	cin >> s >> n;
	int drag[n][2];

	for (int i = 0; i < n; ++i)
	{
		cin >> drag[i][0] >> drag[i][1];
	}

	// SORTING
	for (int i = 0; i < n-1; ++i)
	{
		if (drag[i][0] > drag[i+1][0])
		{
			int tmp0,tmp1;
			tmp0 = drag[i][0];
			drag[i][0] = drag[i+1][0];
			drag[i+1][0] = tmp0;

			tmp1 = drag[i][1];
			drag[i][1] = drag[i+1][1];
			drag[i+1][1] = tmp1;
		}
	}

	// // TEST
	// for (int i = 0; i < n; ++i)
	// {
	// 	if (s>drag[i][0] && i<n-1)
	// 	{
	// 		s+=drag[i][1];
	// 	}
	// 	else if (i == n-1 && s>drag[i][0])
	// 	{
	// 		cout << "YES";
	// 	}
	// 	else { cout << "NO"; break;}
	// }

	// }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << drag[i][j] << " "; 
		}
		cout << endl;
	}
	return 0;
}