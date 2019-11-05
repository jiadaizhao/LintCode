class Solution:
    """
    @param nestedList: a list of NestedInteger
    @return: the sum
    """
    def depthSumInverse(self, nestedList):
        # Write your code here.
        unweighted = weighted = 0
        while nestedList:
            nextLevel = []
            for ni in nestedList:
                if ni.isInteger():
                    unweighted += ni.getInteger()
                else:
                    for l in ni.getList():
                        nextLevel.append(l)
            
            weighted += unweighted
            nestedList = nextLevel

        return weighted
