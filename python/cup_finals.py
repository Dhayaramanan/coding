def main():
    test_cases = int(input())

    for i in range(test_cases):
        #skill of one team is x
        #skill of competing team is y
        #skill difference between teams is d

        x, y, d = map(int, input().split())

        if abs(x - y) <= d:
            print('YES')
        else:
            print('NO')

if __name__ == '__main__':
    main()