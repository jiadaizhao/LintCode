class Solution:
    """
    @param ages: 
    @return: nothing
    """
    def numFriendRequests(self, ages):
        counts = [0] * 121
        presum = [0] * 121
        for age in ages:
            counts[age] += 1
            
        for i in range(1, 121):
            presum[i] = presum[i - 1] + counts[i]
            
        total = 0
        for A in range(15, 121):
            countB = presum[A] - presum[A // 2 + 7]
            total += (countB - 1) * counts[A]
        return total
