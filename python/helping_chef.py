def main():
    test_cases = int(input())

    for i in range(test_cases):
        n = int(input())

        if n < 10:
            print('Thanks for helping Chef!')
        else:
            print('-1')

if __name__ == '__main__':
    main()
