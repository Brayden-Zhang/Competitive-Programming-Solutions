n = int(input())
arr = list(map(int, input().split()))

best = 0
total = 0

for k in range(n):
    total  = max(arr[k],  total + arr[k])
    best = max(best, total )
print(best)
