#include <bits/stdc++.h>



int main(){
	std::string line;
	std::getline(std::cin, line);
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	char taken[1000] = {0};
	int count=0,result=0;
	for (int i=0;i<line.length();i++)
	{
		if (line[i] != ' ' && line[i] != '{' && line[i] != '}' && line[i] != ',')
		{
			taken[count] = line[i];
			++count;
		}
	}
	// if (taken[10] == '\0')std::cout << "asd";
	for (int i=0;i<count;i++)
	{
		for (int j=0;j<count;j++)
		{
			if (j>i && taken[i] == taken[j])
			{
				taken[j] = '\0';
			}
		}
	}
	for (int i=0;i<count;i++)
	{
		if(taken[i] != '\0') ++result;
	}
	std::cout << result;
	return 0;
}