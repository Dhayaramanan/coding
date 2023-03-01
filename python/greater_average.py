class Average:
    def __init__(self, num1, num2, flag):
        self.num1 = num1
        self.num2 = num2
        self.flag = flag
    
    def is_greater_average(self):
        average = (self.num1 + self.num2) / 2

        if average > self.flag:
            print('Yes')
        else:
            print('No')

def main():
    num1, num2, flag = map(int, input().split())
    avg = Average(num1, num2, flag)

    avg.is_greater_average()

if __name__ == '__main__':
    main()
