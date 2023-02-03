def main():
    test_cases = int(input())

    for i in range(test_cases):
        number_of_women = int(input())
        age = list(map(int, input().split()))
        eligible = list(filter(lambda x: x >= 10 and x <= 60, age))

        print(len(eligible))

if __name__ == '__main__':
    main()