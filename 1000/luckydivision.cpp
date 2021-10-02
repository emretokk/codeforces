#include <iostream>
using namespace std;

int checklucky(int n){
	int size=0,digit,check=0;
	for (int i=n;i>0;i/=10){
		size+=1;
	}
	for (int i=n;i>0;i/=10){
		digit=i%10;
		if (digit == 7 || digit == 4){
			check+=1;
		}		
	}
	if (size == check) {
		return 1;
	}
	else{ 
		return 0; 
	}
}

int checkalmostlucky(int n){
	for (int i=1;i<n;i++)
	{
		if (checklucky(i) == 1 && n%i == 0){
			return 1;
		}
	}
	return 0;

}
int main()
{
	int n;
	cin >> n;
	if (checklucky(n)==1 || checkalmostlucky(n)==1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}