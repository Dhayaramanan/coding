test_cases = int(input())

for i in range(test_cases):
    n, x, y = map(int, input().split())

    if x*y >= n:
        print('YES')
    else:
        print('NO')
