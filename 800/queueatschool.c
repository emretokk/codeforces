#include <stdio.h>
int main()
{
    int n,x,i,j;
    char s[52];
    scanf("%d%d",&n,&x);
    scanf("%s",s);
    for(j=0; j<x; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                j++;
            }
        }

    }
    printf("%s\n",s);
    return 0;
}