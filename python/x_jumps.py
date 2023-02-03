def main():
    #current_stair = 0
    #number of testcases
    test_cases = int(input())
    
    for _i in range(test_cases):
        destination, steps = map(int, input().split())

        #number of jumps to reach destination step
        number_of_jumps = (destination // steps) + (destination % steps)
        print(number_of_jumps)

if __name__ == '__main__':
    main()