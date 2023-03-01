class Solution:
    def __init__(self, gym_fee, trainer_fee, budget):
        self.gym_fee = gym_fee
        self.trainer_fee = trainer_fee
        self.budget = budget
    
    #0 ---> can't even join gym
    #1 ---> can only join gym
    #2 ---> can join gym and also can hire a trainer

    def what_can_afford(self):
        if self.budget < self.gym_fee:
            print(0)
        elif self.gym_fee < self.budget and \
            (self.gym_fee + self.trainer_fee) > self.budget:
            print(1)
        else:
            print(2)

def main():
    gym_fee, trainer_fee, budget = map(int, input().split())
    
    gym = Solution(gym_fee, trainer_fee, budget)

    gym.what_can_afford()

if __name__ == '__main__':
    main()