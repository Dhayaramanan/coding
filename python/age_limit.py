class Age:
    def __init__(self, lowerLimit, upperLimit, current):
        self.lowerLimit = lowerLimit
        self.upperLimit = upperLimit
        self.current = current
    
    def is_valid(self):
        if self.current >= self.lowerLimit and self.current < self.upperLimit:
            print('Yes')
        else:
            print('No')

def main():
    x, y, a = map(int, input().split())
    #x = lowerLimit age
    #y = upperLimit age
    #a = current age

    validate = Age(x, y, a)

    validate.is_valid()

if __name__ == '__main__':
    main()