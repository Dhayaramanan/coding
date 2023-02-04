def main():
    number1, number2 = map(int, input().split())

    if number1 > number2:
        print(number1 - number2)
    else:
        print(number1 + number2)

if __name__ == '__main__':
    main()