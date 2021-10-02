s = input()
cy = 0
if len(s) >= 7:
	for i in range(len(s)):
		if len(s) >= i and len(s) >= i+6:
			if s[i] == s[i+1] == s[i+2] == s[i+3] == s[i+4] == s[i+5] == s[i+6]:
				cy+=1
				break
		else:
			pass
if cy > 0:
	print("YES")
else:
	print("NO")