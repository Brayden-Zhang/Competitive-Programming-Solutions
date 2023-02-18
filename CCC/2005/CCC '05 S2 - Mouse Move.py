x_bound, y_bound = [int(x) for x in input().split()] 

x_pos = 0
y_pos = 0

while True:
    dx, dy = [int(x) for x in input().split()] # Get relative motion
    if dx == 0 and dy == 0: # Check for termination
        break
    x_pos += dx # Update cursor position
    y_pos += dy
    if x_pos < 0: # Check for screen boundaries
        x_pos = 0
    if y_pos < 0:
        y_pos = 0
    if x_pos  > x_bound:
        x_pos  = x_bound
    if y_pos > y_bound:
        y_pos = y_bound
    print(x_pos, y_pos) # Print updated cursor position
