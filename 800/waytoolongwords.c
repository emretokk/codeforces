#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		char s[100];
		int len;
		scanf("%s",&s);
		len = strlen(s);
		if (len>10)
		{
			printf("%s",s[0]);
			printf("%d",(len-2));
			printf("%s",s[-1]);
		}
		else{
			printf("%s",s);
		}
	}
	return 0;
}