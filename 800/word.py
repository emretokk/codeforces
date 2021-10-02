"""
that would change the letters' register in every word
so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones.
														 (  tersine  )
input : 
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.
																									(  sahip  )
output : 
Print the corrected word s. 
If the given word s has strictly more uppercase letters, 
make the word written in the uppercase register, otherwise - in the lowercase one.

"""
s = str(input())
upcount = 0
lowcount = 0
for letter in s:
	if letter.isupper():
		upcount+=1
	else:
		lowcount+=1
if upcount>lowcount:
	print(s.upper())
else:
	print(s.lower())