def main():
    practiced, participated = map(int, input().split())

    if not practiced:
        print('https://www.codechef.com/practice')
    elif practiced and not participated:
        print('https://www.codechef.com/contests')
    else:
        print('https://discuss.codechef.com')

if __name__ == '__main__':
    main()