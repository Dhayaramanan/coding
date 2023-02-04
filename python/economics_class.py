def equilibrium(supply, demand):
    count = 0
    for i, j in zip(supply, demand):
        if i == j:
            count += 1
    
    return count

def main():
    test_cases = int(input())

    for _i in range(test_cases):
        n = int(input()) #time data
        s = list(map(int, input().split())) #supply
        d = list(map(int, input().split())) #demand

        print(equilibrium(s, d))

if __name__ == '__main__':
    main()
