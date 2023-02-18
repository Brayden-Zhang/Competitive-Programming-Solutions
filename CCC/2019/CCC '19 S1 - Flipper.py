line = input()

grid = [[1,2],[3,4]]

def hflip(grid):
    grid[0],grid[1] = grid[1],grid[0]
    return grid

def vflip(grid):
    temp = [grid[0][1], grid[0][0]]
    temp1 = [grid[1][1] , grid[1][0]]
    grid[1] = temp1
    grid[0] = temp
    return grid


for i in range(len(line)):
    if line[i] == "H":
        hflip(grid)
    else:
        vflip(grid)

for i in grid:
    for k in i:
        print(k, end=" ")
    print(" ")
