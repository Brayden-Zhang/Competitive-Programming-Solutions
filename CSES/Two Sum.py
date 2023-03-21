import sys

n, target = map(int, input().split())
values = [int(x) for x in input().split()]

# use a map to avoid using a very large array
val_to_ind = {}
for i, val in enumerate(values):
	# target minus a number is the other number
	if target - val in val_to_ind:
		print(i + 1, val_to_ind[target - val])
		sys.exit(0)
	val_to_ind[val] = i + 1

print("IMPOSSIBLE")