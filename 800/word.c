// that would change the letters' register in every word
// so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones.
// 														 (  tersine  )
// input : 
// The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.
// 																									(  sahip  )
// output : 
// Print the corrected word s. 
// If the given word s has strictly more uppercase letters, 
// make the word written in the uppercase register, otherwise - in the lowercase one.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[101];
	int upcount=0,lowcount=0;
	scanf("%s",&s);
	for (int i = 0; i < strlen(s); i++)
	{
		if (isupper(s[i]))
		{
			upcount+=1;
		}
		else{
			lowcount+=1;
		}
	}
	if (upcount>lowcount)
	{
		for (int i = 0; i < strlen(s); i++)
		{
			s[i] = toupper(s[i]);
		}
	}
	else{
		for (int i = 0; i < strlen(s); i++)
		{
			s[i] = tolower(s[i]);
		}
	}
	printf("%s",s);
	return 0;
}