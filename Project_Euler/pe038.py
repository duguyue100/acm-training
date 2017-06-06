"""Solution to Project Euler 038: Pandigital multiples.

Author: Yuhuang Hu
Email : duguyue100
"""


def check(pm):
    for i in xrange(1, 10):
        if str(i) not in pm:
            return False
    if "0" in pm:
        return False
    return True

max_pm = 0
for i in xrange(9):
    for j in xrange(9):
        for k in xrange(9):
            if i != j and j != k and i != k:
                base_digit = i*100+j*10+k
                base_digit = int("9"+str(base_digit))

                # control flow
                pm = str(base_digit)
                for idx in xrange(2, 6):
                    pm += str(base_digit*idx)

                    if len(pm) > 9:
                        #  print pm+" NO"
                        break
                    elif len(pm) == 9:
                        if check(pm):
                            print pm+" OK "+str(base_digit)
                            if int(pm) > max_pm:
                                max_pm = int(pm)
                        break

print max_pm
