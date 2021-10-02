limak,bob = input().split()
limak,bob = int(limak),int(bob)
year = 0
while limak <= bob:
	limak = limak*3
	bob = bob*2
	year+=1
print(year)