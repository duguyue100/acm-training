"""Solution to Project Euler 052: Permuted multiples.

Author: Yuhuang Hu
Email : duguyue100
"""

n = 3
max_limit = 166666


def num_to_list(n):
    """number to list."""
    n_list = []
    while n != 0:
        n_list.append(n % 10)
        n /= 10

    return sorted(n_list)

while n <= max_limit:
    n_str = str(n)
    if int(n_str[0]) != 1:
        n += 1
        continue
    if int(n_str[1]) > 6:
        n += 1
        continue

    n_list = num_to_list(n)
    if n_list == num_to_list(2*n):
        if n_list == num_to_list(3*n):
            if n_list == num_to_list(4*n):
                if n_list == num_to_list(5*n):
                    if n_list == num_to_list(6*n):
                        print n
                        break

    n += 1
