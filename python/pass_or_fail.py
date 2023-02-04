def main():
    test_cases = int(input())

    for i in range(test_cases):
        number_of_questions, correct_questions, pass_mark = map(int, input().split())
        
        total_mark = (correct_questions * 3) - (number_of_questions - correct_questions)

        if total_mark >= pass_mark:
            print('PASS')
        else:
            print('FAIL')

if __name__ == '__main__':
    main()