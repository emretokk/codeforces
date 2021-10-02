line1 = list(input().split(" "))
line2 = list(input().split(" "))
line3 = list(input().split(" "))
line4 = list(input().split(" "))
line5 = list(input().split(" "))

col1 = [line1[0],line2[0],line3[0],line4[0],line5[0]]
col2 = [line1[1],line2[1],line3[1],line4[1],line5[1]]
col3 = [line1[2],line2[2],line3[2],line4[2],line5[2]]
col4 = [line1[3],line2[3],line3[3],line4[3],line5[3]]
col5 = [line1[4],line2[4],line3[4],line4[4],line5[4]]

lines = [line1,line2,line3,line4,line5]
cols = [col1,col2,col3,col4,col5]

li = None
ci = None

for l in lines:
	if "1" in l:
		ci = l.index("1")+1

for c in cols:
	if "1" in c:
		li = c.index("1")+1

s1 = abs(3-li)
s2 = abs(3-ci)

print(s1+s2)