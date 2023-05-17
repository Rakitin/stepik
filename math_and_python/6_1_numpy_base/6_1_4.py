import numpy as np
import math as m

A1 = np.array((-1, 1))
A2 = np.array((2, 5))
A3 = np.array((5, -3))

a = sum((A1 - A2)**2)**0.5
b = sum((A2 - A3)**2)**0.5
c = sum((A3 - A1)**2)**0.5
p = (a + b + c) / 2
print(m.sqrt(p*(p - a)*(p - b)*(p - c)))