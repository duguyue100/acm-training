"""Solution to Project Euler 030: Digit fifth powers.

Author: Yuhuang Hu
Email : duguyue100
"""


def fifth_power_sum(n):
    """Calculate fith power sum."""
    s = 0

    while (n != 0):
        r = n % 10
        n /= 10
        s += r**5

    return s

max_limit = 354295

all_sum = 0
for n in xrange(10, max_limit):
    if n == fifth_power_sum(n):
        all_sum += n
        print "Hit: %i" % n

print all_sum
