import random

def randomNoGenerator(l,u):
	for i in range(u-l):
		print(random.randint(l,u))

print("printing 10 random nos")

randomNoGenerator(10,20)
	
