
def foo(s, c):
	return s.count(c) if c in s else len(s)

s = input().lower()
c = input().lower()
print(foo(s, c))