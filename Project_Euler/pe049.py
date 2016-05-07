"""Solution to Project Euler 049: Prime permutations.

Author: Yuhuang Hu
Email : duguyue100@gmail.com
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


def find_valid(num_list):
    """check if valid and return valid number."""
    for num in num_list[:-3]:
        idx = num_list.index(num)
        for s_num in num_list[idx+1:]:
            diff = s_num-num
            if (s_num+diff) in num_list:
                return [num, s_num, s_num+diff]

    return []


def search(num_list):
    """search valid numbers."""
    valid_list = []
    for f in num_list:
        temp_list_s = num_list[:]
        temp_list_s.remove(f)
        for s in temp_list_s:
            temp_list_t = temp_list_s[:]
            temp_list_t.remove(s)
            for t in temp_list_t:
                temp_list_l = temp_list_t[:]
                temp_list_l.remove(t)
                for l in temp_list_l:
                    if (f != 0) and (l % 2 == 1):
                        num = f*1000+s*100+t*10+l
                        if is_prime(num) and (num not in valid_list):
                            valid_list.append(num)

    if len(valid_list) > 3:
        sorted(valid_list)
        valid_list = find_valid(valid_list)
        if len(valid_list) >= 3:
            print "-------"
            print num_list
            print valid_list

for f in xrange(0, 10):
    for s in xrange(0, 10):
        for t in xrange(0, 10):
            for l in xrange(0, 10):
                search([f, s, t, l])
