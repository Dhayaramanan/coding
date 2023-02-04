def main():
    test_cases = int(input())

    for _i in range(test_cases):
        submission_A, submission_B, submission_C = map(int, input().split())

        #question with less submission is the toughest
        #alice says C is hardest
        #bob says B is hardest
        if submission_A < submission_B and submission_A < submission_C:
            print('Draw')
        elif submission_C < submission_B:
            print('Alice')
        else:
            print('Bob')

if __name__ == '__main__':
    main()