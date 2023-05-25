
def foo(n):
	l1 = 0
	l2 = 1
	for i in range(n - 1):
		if (i == 0):
			print(0, end=' ')
		if (i == 1):
			print(1, end=' ')
		
		l1, l2 = l2, l2 + l1
		print(l2, end=' ')

n = int(input())
foo(n)
print('')
