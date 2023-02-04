def second_largest(num1, num2, num3):
    l =[num1, num2, num3]
    l.sort()

    return l[1]

def main():
    test_cases = int(input())

    for i in range(test_cases):
        a, b, c = map(int, input().split())

        print(second_largest(a, b, c))

if __name__ == '__main__':
    main()