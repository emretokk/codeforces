n,k = input().split()
inscores = input().split()
n,k = int(n),int(k)
scores = []
count = 0
for score in inscores:
	a = int(score)
	scores.append(a)
scores.sort(reverse=True)
for score in scores:
	if (score >= scores[k-1]) and (score != 0):
		count+=1
print(count)