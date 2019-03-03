import collections
class Solution:
    """
    @param formula: a string
    @return: return a string
    """
    def countOfAtoms(self, formula):
        # write your code here
        self.i = 0
        def helper(s):
            table = collections.Counter()
            while self.i < len(s) and s[self.i] != ')':
                if s[self.i] == '(':
                    self.i += 1
                    nextTable = helper(s)
                    for k, v in nextTable.items():
                        table[k] += v
                else:
                    start = self.i
                    self.i += 1
                    while self.i < len(s) and s[self.i].islower():
                        self.i += 1
                    name = s[start:self.i]
                    num = 0
                    while self.i < len(s) and s[self.i].isdigit():
                        num = num*10 + int(s[self.i])
                        self.i += 1
                    if num == 0:
                        num = 1
                    table[name] += num
                    
            if self.i < len(s):
                self.i += 1
                num = 0
                while self.i < len(s) and s[self.i].isdigit():
                    num = num*10 + int(s[self.i])
                    self.i += 1
                if num != 0:
                    for k in table.keys():
                        table[k] *= num
            return table
        
        
        table = helper(formula)
        return ''.join(k + (str(table[k]) if table[k] > 1 else '')for k in sorted(table))
