letters= input()
L = 0
M = 0
S = 0
arr = [[0,0,0]]
for x in letters:
    nL = arr[-1][0]
    nM = arr[-1][1]
    nS = arr[-1][2]
    if x == "L":
        nL += 1
        L += 1
    elif x == "M":
        nM += 1
        M += 1
    else:
        nS += 1
        S += 1
    arr.append([nL, nM, nS])
if L != 0 and M != 0 and S != 0:
    g1 = arr[L]
    g2 = [arr[L + M][0] - arr[L][0], arr[L + M][1] - arr[L][1], arr[L + M][2] - arr[L][2]]
    g3 = [arr[L + M + S][0] - arr[L + M][0], arr[L + M + S][1] - arr[L + M][1], arr[L + M + S][2] - arr[L + M][2]]
    step = 0
    step += min(g1[1], g2[0]) + min(g1[2], g3[0])
    g1[1] -= min(g1[1], g2[0])
    g2[0] -= min(g1[1], g2[0])
    g1[2] -= min(g1[2], g3[0])
    g3[0] -= min(g1[2], g3[0])
    step += min(g2[2], g3[1])
    g2[2] -= min(g2[2], g3[1])
    g3[1] -= min(g2[2], g3[1])
    step += g1[1]*2 + g1[2]*2
    print(step)

else:
    if L == 0:
        if M != 0 and S != 0:
            print(arr[M][2])
        else:
            print(0)
    elif M == 0:
        if L != 0 and S != 0:
            print(arr[L][2])
        else:
            print(0)
    else:
        if L != 0 and M != 0:
            print(arr[M][1])
        else:
            print(0)
