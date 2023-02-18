c = int(input())

ctotals = []

for i in range(c):

	cw, cl = map(int, input().split())

	ctotals.append(cw*cl)

	
ctotals.sort()

ntotals = []

n = int(input())

for i in range(n):
	nw, nl = map(int, input().split())

	ntotals.append(nw*nl)

ntotals.sort()
if (ctotals[-1] > ntotals[-1]):
	print("Casper")
elif (ctotals[-1] == ntotals[-1]):
	print("Tie")

else:
	print("Natalie")
