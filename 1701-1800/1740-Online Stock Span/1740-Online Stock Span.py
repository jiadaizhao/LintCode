class StockSpanner:
    def __init__(self):
        self.St = []
        
    """
    @param price: 
    @return: int
    """
    def next(self, price):
        # Write your code here.
        num = 1
        while self.St and self.St[-1][0] <= price:
            num += self.St.pop()[1]
        self.St.append((price, num))
        return num
