import collections
class Solution:
    """
    @param length: the length of board
    @param connections: the connections of the positions
    @return: the minimum steps to reach the end
    """
    def modernLudo(self, length, connections):
        # Write your code here
        if length <= 7:
            return 1
            
        dp = [1]*8 + [length]*(length - 7)
        table = collections.defaultdict(list)
        for c in connections:
            table[c[1]].append(c[0])
        for i in range(8, length + 1):
            for j in range(1, 7):
                dp[i] = min(dp[i], dp[i - j] + 1)
            
            for start in table[i]:
                dp[i] = min(dp[i], dp[start])

        return dp[-1]
