import math

a,b = map(int, input().split())
c,d = map(int, input().split())
x,y = map(int, input().split())
dis = int(input())

truedisA = math.sqrt((abs(a-x))**2 + (abs(b-y))**2)
truedisB = math.sqrt((abs(c-x))**2  + (abs(d-y)**2))
truetruedis = min(truedisA, truedisB)

if truetruedis <= dis:
	print("Yes")
else:
	print("No")
