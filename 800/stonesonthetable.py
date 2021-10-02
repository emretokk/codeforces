n = int(input())
s = input()
l=[]
output = 0
for i in s:
	l.append(i)

for i in range(n):
	if len(l) == 1:
		break
	elif l[0] == l[1]:
		output+=1
		l.remove(l[0])
	else:
		l.remove(l[0])
print(output)