rows =  int(input())
columns = int(input())
choices = int(input())

paintrow= [False] * rows
paintcol = [False] * columns
for i in range(choices):
	row_or_col, position = input().split()
	position = int(position)
	position -= 1
	if row_or_col == "R":
		paintrow[position] = not paintrow[position]
	

	else:
		paintcol[position] = not paintcol[position]

goldtiles = 0
blackrows = 0
goldrows = 0

for  i in range(rows):
	if paintrow[i] == True:
		goldtiles += columns
		goldrows +=1 
	else:
		blackrows+=1 
new_goldtiles = 0
for i in range(columns):
	if paintcol[i] == True:
		new_goldtiles = blackrows - goldrows
		goldtiles += new_goldtiles
	
print(goldtiles)
