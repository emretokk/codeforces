n,m,a = input().split()
n,m,a = int(n), int(m), int(a)
if m == a and n == a:
	print(1)
else:
	m-=a
	cn,cm = None,None
	if type(n/a) == type(2.5):
		cn = int(n/a)+1
	else:
		cn = n/a

	if type(m/a) == type(2.5):
		cm = int(m/a)+1
	else:
		cm = m/a
	cm *= cn
	print(cn+cm)
