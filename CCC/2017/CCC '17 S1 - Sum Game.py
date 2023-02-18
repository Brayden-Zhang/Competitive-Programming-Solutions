n = int(input())
line2 = list(map(int, input().split()))
line3 = list(map(int, input().split()))


line2count = 0 
line3count = 0
ilist = []

for i in range(n):
	line2count += line2[i]
	line3count += line3[i]
	if line2count == line3count:
		ilist.append(i+1)
ilist.sort()
if (len(ilist) >0 ):

	print(max(ilist))
else:
	print(0)
