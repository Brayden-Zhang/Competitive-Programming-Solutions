n = int(input())

# speeds = []
# times = []

totals = []
for i in range(n):
    speed, time = map(int, input().split())
    info = (speed, time)
    totals.append(info)
# print(totals)

totals.sort()
# print(totals)

# print(totals[2][1])
max_speed = 0

max_speed = max(abs(totals[i][1] - totals[i-1][1]) / (totals[i][0] - totals[i-1][0]) for i in range(1, n)) 
print(max_speed)
