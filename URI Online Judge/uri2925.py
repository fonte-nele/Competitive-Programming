# -*- coding: utf-8 -*-

def rev(num):
	b = int("".join(reversed(str(num))))
	return b

seq = []
seq1 = []
seq.append(1)
seq.append(1)
seq1.append(1)
seq1.append(1)
for i in range(2, 61):
	seq.append(seq1[i-1] + seq1[i-2])
	seq1.append(rev(seq[i]))
	#print(seq[i])
seq[0] = 0

while True:
	try:
		n = int(input())
		print(seq[n])
	except:
		break
