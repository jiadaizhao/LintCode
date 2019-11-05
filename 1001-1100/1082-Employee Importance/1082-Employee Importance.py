"""
# Employee info
class Employee:
    def __init__(self, id, importance, subordinates):
        # It's the unique id of each node.
        # unique id of this employee
        self.id = id
        # the importance value of this employee
        self.importance = importance
        # the id of direct subordinates
        self.subordinates = subordinates
"""
import collections
class Solution:
    """
    @param imput: 
    @param id: 
    @return: the total importance value 
    """
    def getImportance(self, employees, id):
        # Write your code here.
        table = {e.id : e for e in employees}
        Q = collections.deque([table[id]])
        total = 0
        while Q:
            e = Q.popleft()
            total += e.importance
            for i in e.subordinates:
                Q.append(table[i])
        
        return total
