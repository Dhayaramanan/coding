class Solution:
    #D -> number of times to apply sum
    #N -> Number
    def __init__(self, d, n):
        self.d = d
        self.n = n
    
    def new_sum(self):
        for i in range(self.d+1):
            self.n = self.sum_of_sum(self.n)
        
        return self.n
    
    def sum_of_sum(self, n):
        sum = 0
        for i in range(n):
            sum += i
        return sum

sol = Solution(2, 3)
print(sol.new_sum())