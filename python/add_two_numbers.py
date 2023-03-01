class Add:
    def __init__(self, number1, number2):
        self.num1 = number1
        self.num2 = number2
    
    def add(self):
        return self.num1 + self.num2

def main():
    number1, number2 = map(int, input().split())
    
    addition = Add(number1, number2)

    print(addition.add())

if __name__ == '__main__':
    main()