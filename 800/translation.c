#include <stdio.h>
#include <string.h>
int main()
{
	char s[102],t[102],r[102];
	scanf("%s%s",&s,&t);
	int i=0,cout=0;
	for (int j=strlen(s)-1;j>=0;j--)
	{
		if (s[i] == t[j])
		{
			cout++;
		}
		i++;
	}
	if (cout == strlen(s))
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}