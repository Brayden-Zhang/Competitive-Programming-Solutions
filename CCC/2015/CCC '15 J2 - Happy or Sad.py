l = input()
happyc = l.count(":-)")
sadc = l.count(":-(")
if happyc > sadc:
	print("happy")
elif happyc < sadc:
	print("sad")
elif happyc == 0 and  sadc ==0:
	print("none")
else:
	print("unsure")
