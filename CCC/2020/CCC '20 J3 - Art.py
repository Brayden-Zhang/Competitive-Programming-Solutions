n= int(input())
xlist = []
ylist = []
for i in range(n):
	a, b = map(int, input().split(","))
	xlist.append(a)
	ylist.append(b)

xlist.sort()
ylist.sort()
print(xlist[0]-1, ",", ylist[0]-1,sep="")
print(xlist[-1]+1, ",", ylist[-1]+1,sep="")
