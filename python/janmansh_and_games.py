def main():
    test_cases = int(input())

    for _i in range(test_cases):
        start_move, total_moves = map(int, input().split())

        if (start_move + total_moves) % 2 == 0:
            print('Janmansh')
        else:
            print('Jay')

if __name__ == '__main__':
    main()
