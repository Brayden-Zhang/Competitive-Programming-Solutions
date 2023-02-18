import sys

INF = sys.maxsize

def read():
    r, c = map(int, input().split())
    out = []
    for _ in range(r):
        v = list(map(int, input().split()))
        out.append(v)
    return out

def tensor(a, b):
    out = []
    for ar in range(len(a)):
        for br in range(len(b)):
            v = []
            for ac in range(len(a[0])):
                for bc in range(len(b[0])):
                    v.append(a[ar][ac] * b[br][bc])
            out.append(v)
    return out

def eval(v):
    min_ele = INF
    max_ele = -INF
    min_row = INF
    max_row = -INF
    min_col = INF
    max_col = -INF

    for i in range(len(v)):
        for j in range(len(v[0])):
            min_ele = min(min_ele, v[i][j])
            max_ele = max(max_ele, v[i][j])

    for i in range(len(v)):
        row = 0
        for j in range(len(v[0])):
            row += v[i][j]
        min_row = min(min_row, row)
        max_row = max(max_row, row)

    for j in range(len(v[0])):
        col = 0
        for i in range(len(v)):
            col += v[i][j]
        min_col = min(min_col, col)
        max_col = max(max_col, col)

    print(max_ele)
    print(min_ele)
    print(max_row)
    print(min_row)
    print(max_col)
    print(min_col)

       

n = int(input())
v = read()
for _ in range(n - 1):
    t = read()
    v = tensor(v, t)

eval(v)
