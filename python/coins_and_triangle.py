def rows(n):
    r = 0
    for i in range(1, n+1):
        r += i
        if r == n:
            r = i
            break
        elif r > n:
            r = i - 1
            break

    return r

def main():
    test_cases = int(input())

    for i in range(test_cases):
        n = int(input())
        print(rows(n))

if __name__ == '__main__':
    main()