"""
Program to find the number of squats that a person did using OOP
"""

class Squats:
    def __init__(self, set_of_squats, squats_per_set):
        self.set_of_squats = set_of_squats
        self.squats_per_set = squats_per_set
    
    def count_squats(self):
        return self.set_of_squats * self.squats_per_set

def main():
    SQUATS_PER_SET = 15

    number_of_sets = int(input())

    squats = Squats(number_of_sets, SQUATS_PER_SET)

    print(squats.count_squats())

if __name__ == '__main__':
    main()