l = list(map(int, input().split()))
r = list()
for n in l:
	if n in r:
		continue
	r.append(n)
print(*r)
