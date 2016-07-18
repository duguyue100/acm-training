"""Solution to Project Euler 031: Coin sums.

Author: Yuhuang Hu
Email : duguyue100
"""

coins = [1, 2, 5, 10, 20, 50, 100, 200]
target = 200


def search(n):
    """Search the solution."""
    f = [0] * (n+1)
    f[0] = 1
    for coin in coins:
        for i in xrange(coin, n+1):
            f[i] += f[i-coin]

    return f[n]

print search(target)
