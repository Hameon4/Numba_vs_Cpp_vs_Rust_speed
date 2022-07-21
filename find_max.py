import time
from numba import njit
import numpy as np 

@njit
def find_max(a, b):
    print(len(a), len(b))
    maxi = 0
    for i in a:
        for j in b:
            if i * j > maxi:
                maxi = i * j

    return maxi


a = np.array([0])
b = np.array([0])
for i in range(1, 20000):
    a = np.append(a, 0.5)
    b = np.append(b, 0.4)


arr = np.array([0])
for i in range(10):
    t0 = time.time()
    find_max(a, b)
    t1 = time.time()
    t2 = t1 - t0
    print(f'Time taken: {t2} seconds')
    arr = np.append(arr, t2)
print(f'Array List: {arr}')
print(f'Average of the array: {np.average(arr)}')
