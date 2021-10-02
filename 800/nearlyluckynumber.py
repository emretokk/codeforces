# We all know that lucky numbers are the positive integers 
# whose decimal representations contain only the lucky digits 4 and 7. 
# For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

# Unfortunately, not all numbers are lucky. 
# Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. 
# He wonders whether number n is a nearly lucky number.

# Input
# The only line contains an integer n (1 ≤ n ≤ 1018).

# Output
# Print on the single line "YES" if n is a nearly lucky number. 
# Otherwise, print "NO" (without the quotes).

n = int(input())
luckydigitcount = 0

for digit in str(n):
	if digit == "7" or digit == "4":
		luckydigitcount +=1

if luckydigitcount == 7 or luckydigitcount == 4:
	print("YES")
else:
	print("NO")