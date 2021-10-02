k,n,w = input().split()
k,n,w = int(k),int(n),int(w)
price = 0
c = 1
for i in range(w):
	price+=k*c
	c+=1
if price > n:
	print(price-n)
else:
	print(0)