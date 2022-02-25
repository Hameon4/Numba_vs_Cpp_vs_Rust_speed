import time
from numba import njit
from numba.core.errors import NumbaDeprecationWarning, NumbaPendingDeprecationWarning
import warnings

warnings.simplefilter('ignore', category=NumbaDeprecationWarning)
warnings.simplefilter('ignore', category=NumbaPendingDeprecationWarning)


@njit
def find_max(a, b):
    print(len(a), len(b))
    maxi = 0
    for i in a:
        for j in b:
            if i * j > maxi:
                maxi = i * j

    return maxi


a = [0.5 for i in range(20000)]
b = [0.4 for j in range(20000)]

t0 = time.time()
s = find_max(a, b)
t1 = time.time()
print(f'Time taken: {t1 - t0} seconds')
