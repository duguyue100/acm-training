"""Solution to Project Euler 056: Powerful digit sum.

Author: Yuhuang Hu
Email : duguyue100
"""

max_digit_sum = 0
for a in xrange(2, 100):
    for b in xrange(2, 100):
        num = a**b
        digit_sum = sum([int(char) for char in str(num)])
        if max_digit_sum < digit_sum:
            max_digit_sum = digit_sum

    print a

print max_digit_sum
