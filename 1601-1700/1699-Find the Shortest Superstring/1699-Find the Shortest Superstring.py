import math
class Solution:
    def shortestSuperstring(self, A):
        """
        :type A: List[str]
        :rtype: str
        """
        N = len(A)
        tails = [[0]*N for _ in range(N)]
        for i, x in enumerate(A):
            for j, y in enumerate(A):
                if i != j:
                    for k in range(len(x) + 1):
                        if y.startswith(x[k:]):
                            tails[i][j] = len(y) - len(x) + k
                            break
                  
        dp = [[math.inf]*N for _ in range(1 << N)]
        parent = [[None]*N for _ in range(1 << N)]
        minLen = math.inf
        last = None
        for mask in range(1, 1 << N):
            for bit in range(N):
                if mask & (1 << bit):
                    prev = mask - (1 << bit)
                    if prev == 0:
                        dp[mask][bit] = len(A[bit])
                    else:
                        for k in range(N):
                            if prev & (1 << k):
                                if dp[prev][k] != math.inf:
                                    val = dp[prev][k] + tails[k][bit]
                                    if val < dp[mask][bit]:
                                        dp[mask][bit] = val
                                        parent[mask][bit] = k
                if mask == (1 << N) - 1 and dp[mask][bit] < minLen:
                    minLen = dp[mask][bit]
                    last = bit
        
        curr = (1 << N) - 1
        St = []
        while curr:
            St.append(last)
            temp = curr
            curr -= (1 << last)
            last = parent[temp][last]
        
        first = St.pop()
        res = [A[first]]
        while St:
            second = St.pop()
            res.append(A[second][len(A[second]) - tails[first][second]:])
            first = second
        return ''.join(res)
