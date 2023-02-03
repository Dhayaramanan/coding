def main():
    test_cases = int(input())

    for _i in range(test_cases):
        x1, y1, x2, y2 = map(int, input().split())
        
        #calculating distance
        distance = max(abs((x1 - x2)), abs((y1 - y2)))
        print(distance)

if __name__ == '__main__':
    main()