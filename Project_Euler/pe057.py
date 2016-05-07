"""Solution to Project Euler 057: Square root convergents.

Author: Yuhuang Hu
Email : duguyue100
"""

f = 1
g = 1

num = 0
for i in xrange(1, 1000):
    f, g = f+2*g, f+g
    if len(str(f)) > len(str(g)):
        num += 1
        print "%i: %d / %d" % (i, f, g)

print num
