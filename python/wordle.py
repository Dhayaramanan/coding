def main():
    test_cases = int(input())

    for _i in range(test_cases):
        hidden_string = input()
        guess_string = input()

        correctness = ''

        for j, k in zip(hidden_string, guess_string):
            if j == k:
                correctness += 'G'
            else:
                correctness += 'B'
        
        print(correctness)

if __name__ == '__main__':
    main()