import collections
class Solution:
    """
    @param names: the name
    @param grades: the grade
    @return: the maximum average score
    """
    def maximumAverageScore(self, names, grades):
        # Write your code here
        table = collections.defaultdict(list)
        for name, grade in zip(names, grades):
            table[name].append(grade)
            
        maxAvg = 0
        for v in table.values():
            maxAvg = max(maxAvg, sum(v) / len(v))
        
        return maxAvg
