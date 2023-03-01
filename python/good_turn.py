def main():
    test_cases = int(input())

    for i in range(test_cases):
        x, y = map(int, input().split())
        
        if (x + y) > 6:
            print('Yes')
        else:
            print('No')