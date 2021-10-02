s = input()
l = []
k = []
for i in s:
	l.append(i)
for i in l:
	if not i in k:
		k.append(i)
if len(k)%2 == 0:
	print("CHAT WITH HER!")
else:
	print("IGNORE HIM!")