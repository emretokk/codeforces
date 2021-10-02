s = list(input())
for i in range(len(s)-1):
	if ((i+1 <= len(s)-1) and s[i] == s[i+1]):
		while (s[i] == s[i+1]):
			del s[i]


res =  0
for i in range(len(s)-1):
	if (i+1 <= len(s)-1 and s[i] == 'h' and s[i+1] == 'e' and s[i+2] == 'l' and s[i+3] == 'o'):
		res = 1
		break
if (res == 1):
	print("YES")
else: 
	print("NO")