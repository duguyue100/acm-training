n = int(input())


def cal(a, b):
    return [a + b, a - b, a * b, a / b, b - a, b / a]


for _ in range(n):
    a, b, c = (float(x) for x in input().split(" "))

    if c in cal(a, b):
        print("Possible")
    else:
        print("Impossible")
