n = int(input())
c = 0
counts = []
for i in range(n):
	ii,bi = input().split(" ")
	ii,bi = int(ii), int(bi)
	c += bi-ii
	counts.append(c)
print(max(counts))