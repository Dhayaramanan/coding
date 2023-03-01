class Taxes:
    def __init__(self, earned, tax_earning):
        self.earned = earned
        self.tax_earning = tax_earning
    
    #no need to pay tax for the amount invested
    def calculate_tax(self):
        return self.earned - self.tax_earning

def main():
    earning, tax_limit_earning = map(int, input().split())

    tax = Taxes(earning, tax_limit_earning)

    print(tax.calculate_tax())

if __name__ == '__main__':
    main()