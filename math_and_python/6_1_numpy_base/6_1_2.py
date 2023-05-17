import numpy as np

a = [int(n) for n in input().split(',')]
b = [int(n) for n in input().split(',')]

V1 = np.array(a)
V2 = np.array(b)
V3 = V1 + V2
V4 = V1[0::2] * V2[::-1][0::2]

print(V1)
print(V2)
print(V3)
print(V4)
