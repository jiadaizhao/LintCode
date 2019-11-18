class Solution:
    """
    @param m: m pillars of your temple.
    @param woods: length of n different wood
    @return: return the maximum height of the temple.
    """
    def buildTemple(self, m, woods):
        # write your code here.
        result = low = 0
        high = max(woods)
        while low < high:
            mid = (low + high) // 2
            count = sum(w // mid for w in woods)
            if count < m:
                high = mid - 1
            else:
                result = mid
                low = mid + 1
                
        return result
