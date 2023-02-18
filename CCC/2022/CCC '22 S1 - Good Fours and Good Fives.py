n = int(input())

counter = 0

if n%20 ==0:
	print(int(n/20) +1)
else:
	if n %4 ==0:
		while (n >=4):
			n -=4
			if (n %5 ==0):
				counter +=1
	else:
		while (n>=5):
			n-=5
			if n%4 ==0:
				counter +=1
	
	
	
	print(counter)
