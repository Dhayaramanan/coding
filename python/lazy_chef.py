def main():
    test_cases = int(input())

    for _i in range(test_cases):
        #x = time supposed to finish the work
        #m = m * x is the time extended by person
        #d = delay limit
        x, m, d = map(int, input().split())

        print(min(x * m, x + d))

if __name__ == '__main__':
    main()