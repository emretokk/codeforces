str1 = str(input()).lower()
str2 = str(input()).lower()
alph = "abcdefghijklmnopqrstuvwxyz"

c1 = 0
c2 = 0

for i in str1:
	if str1[c1] == str2[c2]:
		c1+=1
		c2+=1
	else:
		in1 = alph.index(str1[c1])
		in2 = alph.index(str2[c2])

		c1 += in1
		c2 += in2
		break

if c1==c2:
	print("0")
elif c1 > c2:
	print("1")
elif c1 < c2:
	print("-1")