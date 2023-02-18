n = int(input())
heightinputs = ( input().split(" "))
widthinputs = (input().split(" "))
heights = []
widths = []
for i in range(n+1):
	heights.append(int(heightinputs[i]))
for  i in range(n):

	widths.append(int(widthinputs[i]))
totalarea = 0
for i in range(n):
	totalarea += (((heights[i] + heights[i+1])/2) * widths[i])
print(totalarea)
