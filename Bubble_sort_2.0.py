from random import choice
def bubble_sort(a):
	for x in range(1,len(a)):
		swapped=False
		for i in range(0,len(a)-x):
			if(a[i]>a[i+1]):
				a[i],a[i+1]=a[i+1],a[i]
				swapped=True	
		if not swapped:
			break
		else:
			swapped=False
			continue	
	return a,x
a=[]
for x in range(100):
	a.append(choice(range(100)))
print(bubble_sort(a))
