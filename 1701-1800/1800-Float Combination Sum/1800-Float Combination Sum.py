import math
class Solution:
    def getArray(self, A, target):
        dp = [math.inf] * (1 + target)
        dp[0] = 0
        parent = [[0] * len(A) for _ in range(len(dp))]
        for i, a in enumerate(A):
            for j in range(target, int(a) - 1, -1):
                c = math.ceil(a)
                f = int(a)
                if j >= c and dp[j - c] + c - a <= dp[j - f] + a - f:
                    dp[j] = dp[j - c] + c - a
                    parent[j][i] = 1
                else:
                    dp[j] = dp[j - f] + a - f
                    parent[j][i] = 2

        result = [0] * len(A)
        for i in range(len(result) - 1, -1, -1):
            if parent[target][i] == 1:
                c = math.ceil(A[i])
                result[i] = c
                target -= c
            else:
                f = int(A[i])
                result[i] = f
                target -= f
        return result
