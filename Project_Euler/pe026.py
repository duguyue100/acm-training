"""Solution to Project Euler 026: Reciprocal cycles.

Author: Yuhuang Hu
Email : duguyue100
"""

import numpy as np


def get_reminder(n, d):
    """Get reminder."""
    if n == 0:
        return 0
    while (n < d):
        n *= 10
    return n % d

max_length = 0
max_number = 2
for d in xrange(2, 1001):
    n = 1
    length = 0
    r_arr = np.zeros((d))
    init_r = get_reminder(n, d)
    r_arr[init_r-1] += 1
    new_r = init_r

    while True:
        new_r = get_reminder(new_r, d)

        if new_r == 0:
            length = 0
            print "d: %i, length: %i" % (d, length)
            break
        elif new_r != 0:
            if r_arr[new_r-1] != 0:
                length += 1
                print "d: %i, length: %i" % (d, length)
                break
            else:
                r_arr[new_r-1] += 1
                length += 1

    if length > max_length:
        max_length = length
        max_number = d

print max_length, max_number
