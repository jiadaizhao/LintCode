import collections
class Solution:
    """
    @param answers: some subset of rabbits (possibly all of them) tell 
    @return: the minimum number of rabbits that could be in the forest.
    """
    def numRabbits(self, answers):
        # write your code here
        table = collections.Counter(answers)
        return sum(-v % (k + 1) + v for k, v in table.items())
