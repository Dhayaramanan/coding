import math

class Candies:
    def __init__(self, number_of_children, candy_count):
        self.number_of_children = number_of_children
        self.candy_count = candy_count
    
    def count_packets(self):
        CANDIES_PER_PACKET = 4
        children_left = self.number_of_children - self.candy_count

        if self.number_of_children < self.candy_count:
            return 0        

        if children_left < CANDIES_PER_PACKET:
            return 1

        return math.ceil(children_left / CANDIES_PER_PACKET)

def main():
    number_of_children, candy_count = map(int, input().split())
    candy = Candies(number_of_children, candy_count)

    print(candy.count_packets())

if __name__ == '__main__':
    main()