class Cooler:
    def __init__(self, rent_per_month, cost_of_cooler, months):
        self.rent_per_month = rent_per_month
        self.cost_of_cooler = cost_of_cooler
        self.months = months
    
    def rent_or_purchase(self):
        if (self.rent_per_month * self.months) < self.cost_of_cooler:
            return True #can rent
        
        return False

def main():
    rent, cost, months = map(int, input().split())
    cool = Cooler(rent, cost, months)

    if cool.rent_or_purchase():
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    main()