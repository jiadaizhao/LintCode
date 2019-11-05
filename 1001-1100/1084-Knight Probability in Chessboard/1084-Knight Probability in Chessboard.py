class Solution:
    """
    @param N: int
    @param K: int
    @param r: int
    @param c: int
    @return: the probability
    """
    def knightProbability(self, N, K, r, c):
        # Write your code here.
        dp = [[0] * N for _ in range(N)]
        dp[r][c] = 1
        for _ in range(K):
            temp = [[0] * N for _ in range(N)]
            for r in range(N):
                for c in range(N):
                    for nr, nc in (r-2, c-1), (r-2, c+1), (r-1, c-2), (r-1, c+2), (r+1, c-2), (r+1, c+2), (r+2, c-1), (r+2, c+1):
                        if 0 <= nr < N and 0 <= nc < N:
                            temp[nr][nc] += dp[r][c] / 8
            
            dp = temp
        
        return sum(map(sum, dp))
