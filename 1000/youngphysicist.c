// The body can be considered as a material point with coordinates (0; 0; 0). 
// Vasya had only to answer whether it is in equilibrium. 
// We need only to check if the sum of all vectors is equal to 0. 
// Write a program that determines whether a body is idle Or 
// is moving by the given vectors of forces.

// Input
// The first line contains a positive integer n (1 ≤ n ≤ 100), 
// then follow n lines containing three integers each: 
// the xi coordinate, the yi coordinate and the zi coordinate of the force vector, 
// applied to the body ( - 100 ≤ xi, yi, zi ≤ 100).

// Output
// Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.


#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int coordinates[n*3];
	int cout = 0;
	for (int i=0;i<n;i++)
	{
		int xi,yi,zi;
		scanf("%d %d %d",&xi,&yi,&zi);
		coordinates[cout] = xi;
		cout++;
		coordinates[cout] = yi;
		cout++;
		coordinates[cout] = zi;
		cout++;
	}
	int sumofx=0,sumofy=0,sumofz=0;
	for (int i=0;i<cout;i+=3)
	{
		sumofx+=coordinates[i];
	}
	for (int i=1;i<cout;i+=3)
	{
		sumofy+=coordinates[i];
	}
	for (int i=2;i<cout;i+=3)
	{
		sumofz+=coordinates[i];
	}
	if (sumofx==0 && sumofy==0 && sumofz==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}