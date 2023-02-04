def factorial(n):
    fact = 1
    for i in range(1, n+1):
        fact *= i
    
    return fact

def main():
    test_cases = int(input())

    for i in range(test_cases):
        number = int(input())
        print(factorial(number))

if __name__ == '__main__':
    main()