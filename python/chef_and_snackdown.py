def main():
    hosted_years = [2010, 2015, 2016, 2017, 2019]

    n = int(input())
    if n in hosted_years:
        print('HOSTED')
    else:
        print('NOT HOSTED')

if __name__ == '__main__':
    main()