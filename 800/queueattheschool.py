# Initially the children stood in the order they entered the canteen. 
# However, after a while the boys started feeling awkward for standing in front of the girls 
# in the queue and they started letting the girls move forward each second.

# Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, 
# at that the person in the position number 1 is served first. 
# Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, 
# then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. 
# The time is given in seconds.

# You've got the initial position of the children, at the initial moment of time. 
# Determine the way the queue is going to look after t seconds.

# Input

# The first line contains two integers n and t (1 ≤ n, t ≤ 50), 
# which represent the number of children in the queue 
# and the time after which the queue will transform into the arrangement you need to find.

# The next line contains string s, which represents the schoolchildren's initial arrangement. 
# If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", 
# otherwise the i-th character equals "G".

# Output

# Print string a, which describes the arrangement after t seconds. 
# If the i-th position has a boy after the needed time, 
# then the i-th character a must equal "B", otherwise it must equal "G".
n,t = input().split()
n,t = int(n), int(t)
s = list(input())

while (t>0):
	boyindexes = []
	for index in range(len(s)):
		if (s[index] == "B"):
			boyindexes.append(index)
	for index in boyindexes:
		if (index==len(s)-1):
			break
		if(s[index]=="B" and s[index+1]=="G"):
			s[index] = "G"
			s[index+1] = "B"
	t-=1
print("".join(s))
			
	
