"""Solution to Project Euler 048: Self powers.

Author: Yuhuang Hu
Email : duguyue100
"""

num = 0
m = 1e10

for i in xrange(1, 1001):
    temp = 1
    for j in xrange(1, i+1):
        temp *= i
        temp %= m

    num += temp
    num %= m

print num
