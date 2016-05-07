"""Solution to Project Euler 053: Combinatoric selections.

Author: Yuhuang Hu
Email : duguyue100
"""

from scipy.special import comb

num = 0
for n in xrange(23, 100+1):
    for k in xrange(n):
        if comb(n, k) > 1e6:
            num += 1
            print n, k

print num
