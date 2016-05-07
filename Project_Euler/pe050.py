"""Solution to Project Euler 050: Consecutive prime sum.

Author: Yuhuang Hu
Email : duguyue100@gmail.com
"""

import numpy as np


def is_prime(n):
    """prime check."""
    if n < 2:
        return False
    if n <= 3:
        return True
    if (n % 2 == 0) or (n % 3 == 0):
        return False
    i = 5
    while (i*i <= n):
        if (n % i == 0) or (n % (i+2) == 0):
            return False
        i += 6

    return True

prime_list = [2]

for n in xrange(3, 4000, 2):
    if is_prime(n):
        prime_list.append(n)

num_prime = len(prime_list)

f = np.zeros((num_prime, num_prime))

for i in xrange(num_prime):
    f[i, i] = prime_list[i]

max_length = 0
max_i = 0
max_j = 0
for i in xrange(num_prime):
    for j in xrange(num_prime):
        if i < j:
            f[i, j] = f[i, j-1]+prime_list[j]
            if (is_prime(f[i, j]) and (j-i+1 > max_length) and
               (f[i, j] < 1000000)):
                max_length = j-i+1
                max_i = i
                max_j = j

print f[max_i, max_j]
