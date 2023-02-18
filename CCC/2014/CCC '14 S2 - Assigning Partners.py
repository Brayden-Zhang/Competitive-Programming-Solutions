n= int(input())
line1 = input().split(" ")
line2= input().split(" ")
dict = {}
is_good = 1
for i in range(n):
	person1 = line1[i]
	person2 = line2[i]
	if person1 == person2:
		is_good =0
	if (person1 in dict) and (dict[person1] != person2):
		is_good = 0
	dict[person1] = person2
	dict[person2] = person1
if is_good:
	print("good")
else:
	print("bad")
