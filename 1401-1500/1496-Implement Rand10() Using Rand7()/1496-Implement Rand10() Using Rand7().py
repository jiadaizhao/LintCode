class Solution(SolBase):
    def rand10(self):
        while True:
            row = self.rand7()
            col = self.rand7()
            index = (row - 1) * 7 + col
            if index <= 40:
                break
            
        return 1 + (index - 1) % 10
