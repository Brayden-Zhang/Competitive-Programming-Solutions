testcases = int(input())
array = []

for i in range(testcases):
	array.append([])
	n = input()
	for j in range(int(n)):
		array[i].append(int(input()))
for i in range(testcases):
	carlist = array[i]
	branch = []
	curpos = 1
	while True: 
		if len(carlist) > 0:
			if carlist[-1] == curpos:
				curpos +=1
				carlist.pop()
			elif len(branch) > 0:
				if branch[-1] == curpos:
					curpos +=1
					branch.pop()

				else:
					branch.append(carlist.pop())

			else:
				branch.append(carlist.pop())
		elif len(branch) > 0:
			if branch[-1] == curpos:
				curpos +=1
				branch.pop()
			else:
				print("N")
				break

		else:
			print("Y")

			break
