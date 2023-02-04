def main():
    number = int(input())

    if number % 4 == 0:
        number += 1
    else:
        number -= 1

    print(number)

if __name__ == '__main__':
    main()
