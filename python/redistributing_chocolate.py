def main():
    test_cases = int(input())

    for _i in range(test_cases):
        #initial chocolate they have
        alice, bob, charlie = map(int, input().split())

        if alice+bob+charlie >= 6:
            print('Yes')
        else:
            print('No')

if __name__ == '__main__':
    main()