import numpy as np

sz = tuple(map(int, input().split()))

np.random.seed(42)
Z = np.random.random(sz)

print(np.average(Z))