class Solution:
    """
    @param s: 
    @return: the minimum number of turns the printer needed in order to print it
    """
    def strangePrinter(self, s):
        # write your code here
        table = [[0] * len(s) for i in range(len(s))]
        def dfs(s, l, r):
            if l > r:
                return 0
            if table[l][r]:
                return table[l][r]
            count = dfs(s, l + 1, r) + 1
            for i in range(l + 1, r + 1):
                if (s[i] == s[l]):
                    count = min(count, dfs(s, l + 1, i - 1) + dfs(s, i, r))
            table[l][r] = count
            return count
        return dfs(s, 0, len(s) - 1)
