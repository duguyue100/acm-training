n = int(input())

for _ in range(n):
    line = input()

    try:
        result = eval(line)
    except Exception:
        result = "skipped"

    print(result)
