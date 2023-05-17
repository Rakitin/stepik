t = 'int'
n = list()
for s in input().split():
    if s.isdigit():
        n.append(int(s))
    else:
        t = s

print(n, t)
