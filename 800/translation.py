# For example, a Berlandish word code corresponds to a Birlandish word edoc. 
# However, it's easy to make a mistake during the «translation». 
# Vasya translated word s from Berlandish into Birlandish as t. 
# Help him: find out if he translated the word correctly.

# Input
# The first line contains word s, the second line contains word t. 
# The words consist of lowercase Latin letters. 
# The input data do not consist unnecessary spaces. 
# The words are not empty and their lengths do not exceed 100 symbols.

# Output
# If the word t is a word s, written reversely, print YES, otherwise print NO.

s = list(input())
t = input()
rev = ""
for i in range(len(s)-1,-1,-1):
	rev.join(s[i])
if (rev == t):
	print("YES")
else:
	print("NO")