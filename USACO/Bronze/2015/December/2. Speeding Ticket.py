
n, m = map(int, input().split())

limit  = []

for  i in range(n):
    length, speed = map (int, input().split())

    limit.extend([speed] * length)

bessie = [] # list of speeds

for i in range(m):
    length, speed = map(int, input().split())
    # for each of the next length positions, set bessie's speed
    bessie.extend([speed]  * length)

max_over = 0

for i in range(100):
    max_over = max(max_over, bessie[i] - limit[i])


print(max_over)