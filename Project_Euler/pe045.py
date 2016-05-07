"""Solution to Project Euler 045: Triangular, pentagonal, and hexagonal.

Author: Yuhuang Hu
Email : duguyue100
"""

import numpy as np


def check(n):
    """Check if condition is fulfilled."""
    H = n*(2*n-1)
    p_root = round(np.max(np.roots([3, -1, -2*H])))
    print p_root*(3*p_root-1)/2
    print "-----"
    print "N: %i" % (n)
    print "H: %i" % (H)
    if p_root*(3*p_root-1)/2 != H:
        return False
    print "P: %i" % (p_root*(3*p_root-1)/2)
    t_root = round(np.max(np.roots([1, 1, -2*H])))
    if t_root*(t_root+1)/2 != H:
        return False
    print "T: %i" % (t_root*(t_root+1)/2)

    return True

n = 144
while (not check(n)):
    n += 1

print n
