s = input().lower()
vowels = ["a","o","y","e","u","i"]
for i in s:
	if i in vowels:
		ind = s.index(i)
		if ind == 0:
			s = s[1:]
		elif ind == len(s)-1:
			s = s[:-1]
		else:
			s = s[:ind]+s[ind+1:]
	else:
		pass
sl = list(s)
out = "."+".".join(sl)
print(out)