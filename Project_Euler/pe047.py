"""Solution to Project Euler 047: Distinct primes factors.

Author: Yuhuang Hu
Email : duguyue100
"""


def get_prime_factor(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            if i not in factors:
                factors.append(i)
    if n > 1:
        if n not in factors:
            factors.append(n)
    return factors


def check(n):
    for i in xrange(4):
        if len(get_prime_factor(n+i)) != 4:
            return False
    return True

n = 210

while True:
    if check(n):
        print n
        break
    else:
        n += 1
