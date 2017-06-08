"""Solution to Project Euler 058: Spiral primes.

Author: Yuhuang Hu
Email : duguyue100
"""


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

n = 13211
while n == 13211:
    num_prime = 0
    for i in xrange(1, n+1):
        base = (2*i-1)**2
        addon = (2*i-2)
        if is_prime(base-addon):
            print base-addon
            num_prime += 1
        if is_prime(base-2*addon):
            print base-2*addon
            num_prime += 1
        if is_prime(base-3*addon):
            print base-3*addon
            num_prime += 1
    print num_prime
    print 4*n-3
    print num_prime/float(4*n-3)
    if float(num_prime)/float(4*n-3) < 0.1:
        break
    n += 1

print n
