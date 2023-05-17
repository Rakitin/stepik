import numpy as np

M1 = np.array((
    (1., 2., 3., 0.),
    (4., 5., 6., 0.),
    (0., 1., 1., 6.),
    (7., 8., 9., 0.)
))

M2 = np.array(M1)

# for i in range(M2.shape[0]):
#     M2[-2][i] = np.sin((M2[-2][i]*np.pi)/6)

# for i in range(M2.shape[1]):
#     M2[i][-2] = np.exp(M2[i][-2])

M2[-2] = np.sin((M2[-2]*np.pi)/6)
M2[:, -2] = np.e ** M2[:, -2]

print(M1)
print(M2)