"""Solution to Project Euler 034: Digit factorials.

Author: Yuhuang Hu
Email : duguyue100@gmail.com
"""

import numpy as np
from scipy.special import factorial

fact = np.arange(10)
fact = factorial(fact)

total_sum = 0
for n in xrange(3, 2540160):
    s = 0
    N = n

    while (N != 0):
        r = N % 10
        N = N/10
        s += fact[r]
        if s > n:
            break
        elif s == n and N == 0:
            print "Found: %i" % (n)
            total_sum += n

print total_sum
