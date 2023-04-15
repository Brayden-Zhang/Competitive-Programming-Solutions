# In particular, if we want to count how many of each number appears in the interval [A,B]
# , we can count how many of each number appears in the interval [1,B]
# , and then count how many of each number appears in the interval [1,A−1]
#  and subtract the two quantities.

# construct 3 prefix sum arrays for each cow. 
holsteins = [0]
guernseys = [0]
jerseys = [0]

N, Q = map(int, input().split())
for i in range(N):
    holsteins.append(holsteins[-1])
    guernseys.append(guernseys[-1])
    jerseys.append(jerseys[-1])

    cow = int(input())
    if cow == 1:
        holsteins[-1] += 1
    elif cow == 2:
        guernseys[-1] += 1
    elif cow == 3:
        jerseys[-1] += 1

queries = []

for i in range(Q):
    start, end= map(int, input().split())
    holstein = holsteins[end] - holsteins[start - 1]
    guernsey = guernseys[end] - guernseys[start - 1]
    jersey = jerseys[end] - jerseys[start - 1]
    print(holstein, guernsey, jersey)








