import time
from numba import njit


@njit
def find_max(a, b):
    print(len(a), len(b))
    maxi = 0
    for i in a:
        for j in b:
            if i * j > maxi:
                maxi = i * j

    return maxi


a = [0.5 for i in range(50000)]
b = [0.4 for j in range(50000)]

t0 = time.time()
s = find_max(a, b)
t1 = time.time()
print(str(t1 - t0) + "s res:" + str(s))
