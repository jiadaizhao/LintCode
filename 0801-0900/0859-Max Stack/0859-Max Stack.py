class MaxStack:
    
    def __init__(self):
        # do intialization if necessary
        self.St = []
        self.maxSt = []
    
    """
    @param: number: An integer
    @return: nothing
    """
    def push(self, x):
        # write your code here
        self.St.append(x)
        if not self.maxSt or x >= self.maxSt[-1]:
            self.maxSt.append(x)

    """
    @return: An integer
    """
    def pop(self):
        # write your code here
        val = self.St.pop()
        if val == self.maxSt[-1]:
            self.maxSt.pop()
        return val

    """
    @return: An integer
    """
    def top(self):
        # write your code here
        return self.St[-1]

    """
    @return: An integer
    """
    def peekMax(self):
        # write your code here
        return self.maxSt[-1]

    """
    @return: An integer
    """
    def popMax(self):
        # write your code here
        val = self.maxSt.pop()
        temp = []
        while self.St[-1] != val:
            temp.append(self.St.pop())

        self.St.pop()
        self.St.extend(temp)

        return val
