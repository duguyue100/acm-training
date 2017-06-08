"""Solution to Project Euler 055: Lychrel numbers.

Author: Yuhuang Hu
Email : duguyue100
"""


def palindromic(num):
    for i in xrange(len(num)//2):
        if num[i] != num[len(num)-i-1]:
            return False
    return True


def check(num):
    sum_num = num
    for i in xrange(50):
        sum_num += long(str(sum_num)[::-1])

        if palindromic(str(sum_num)):
            return False
    return True


counter = 0
for num in xrange(1, 10001):
    if check(num):
        counter += 1

print counter
