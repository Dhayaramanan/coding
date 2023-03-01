class Subscription:
    def __init__(self, number_of_friends, cost_of_subscription, sharing):
        self.number_of_friends = number_of_friends
        self.cost_of_subscription = cost_of_subscription
        self.sharing = sharing
    
    #6 memebers can share 1 subscription
    def amount(self):
        friends_left = self.number_of_friends % self.sharing
        shared_friends = self.number_of_friends // self.sharing
        
        total = (self.cost_of_subscription * shared_friends) + \
                (self.cost_of_subscription * friends_left)
        
        return total

def main():
    number_of_friends, cost_of_subscription = map(int, input().split())
    SHARED_MEMBERS = 6

    subscribe = Subscription(number_of_friends, cost_of_subscription,
                SHARED_MEMBERS)
    
    print(subscribe.amount())

if __name__ == '__main__':
    main()
