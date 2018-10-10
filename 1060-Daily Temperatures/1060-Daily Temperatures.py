class Solution:
    """
    @param temperatures: a list of daily temperatures
    @return: a list of how many days you would have to wait until a warmer temperature
    """
    def dailyTemperatures(self, temperatures):
        # Write your code here
        n = len(temperatures)
        result = [0] * n
        St = []
        for i in range(n - 1, -1, -1):
            while St and temperatures[St[-1]] <= temperatures[i]:
                St.pop()
            if St:
                result[i] = St[-1] - i
            St.append(i)
        return result
