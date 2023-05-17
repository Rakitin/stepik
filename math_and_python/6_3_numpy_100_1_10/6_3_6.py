import numpy as np

n, x = int(input()), int(input())

Z = np.zeros(n)
Z[x] = 1.

print(Z)