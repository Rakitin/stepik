import numpy as np

n = int(input())
q = [int(s) for s in input().split()]
Z = np.arange(q[0] * q[1])
Z = np.reshape(Z, q)
print(Z)