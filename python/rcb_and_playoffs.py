def main():
    test_cases = int(input())

    for _i in range(test_cases):
        earned_points, least_points_needed, games_left = map(int, input().split())

        if ((games_left * 2) + earned_points) >= least_points_needed:
            print('YES')
        else:
            print('NO')

if __name__ == '__main__':
    main()