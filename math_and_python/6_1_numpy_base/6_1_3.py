import numpy as np

# a = [1, 2, 3, 4, 5, 6]
# b = [1, 2, 3, 4]

a = [int(n) for n in input().split(',')]
b = [int(n) for n in input().split(',')]

V = np.array(a)
V = V[V % b[-2] == 0] / b[-2]

print(V)