import numpy as np

t = 'float'
n = list()
for s in input().split():
    if s.isdigit():
        n.append(int(s))
    else:
        t = s

Z = np.zeros(n, dtype=t)
print(Z)
