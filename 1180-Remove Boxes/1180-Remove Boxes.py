class Solution:
    """
    @param boxes: List[int]
    @return: return an integer
    """
    def removeBoxes(self, boxes):
        # write your code here
        N = len(boxes)
        dp = {}
        def dfs(i, j, k):
            if i > j:
                return 0
            index = i * N * N + j * N + k
            if index not in dp:
                l = i
                n = k
                while l < j and boxes[l] == boxes[l + 1]:
                    l += 1
                    n += 1
                maxVal = dfs(l + 1, j, 0) + (n + 1) * (n + 1)
                for r in range(l + 2, j + 1):
                    if boxes[l] == boxes[r]:
                        maxVal = max(maxVal, dfs(l + 1, r - 1, 0) + dfs(r, j, n + 1))
                dp[index] = maxVal
            return dp[index]
            
        return dfs(0, len(boxes) - 1, 0)
