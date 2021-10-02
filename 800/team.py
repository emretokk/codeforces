n = int(input())
count = 0
for i in range(0,n):
	inp = input()
	inps = inp.split(" ")
	if inps.count("1") >= 2:
		count+=1
print(count)
