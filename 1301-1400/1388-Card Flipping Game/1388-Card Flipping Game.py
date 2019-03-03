import itertools
class Solution:
    """
    @param fronts: 
    @param backs: 
    @return: nothing
    """
    def flipgame(self, fronts, backs):
        same = {x for x, y in zip(fronts, backs) if x == y}
        MAGIC = 2001
        output = MAGIC
        for x in itertools.chain(fronts, backs):
            if x not in same:
                output = min(output, x)
        return output % MAGIC
