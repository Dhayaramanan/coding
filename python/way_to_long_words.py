def main():
    test_cases = int(input())

    for i in range(test_cases):
        string = input()

        if len(string) <= 10:
            print(string)
        else:
            print(string[0] + str(len(string) - 2) + string[len(string) - 1])

if __name__ == '__main__':
    main()