import numpy as np

a = [float(n) for n in input().split(',')]

V1 = np.array(a)
V2 = np.array(a[-2:-1])
V3 = np.array(a[::-1])
V4 = np.array(a[::3])
V5 = np.array(range(len(a)))
