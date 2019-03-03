class Solution:
    """
    @param difficulty: 
    @param profit: 
    @param worker: 
    @return: nothing
    """
    def maxProfitAssignment(self, difficulty, profit, worker):
        jobs = sorted(zip(difficulty, profit))
        total = index = maxProfit = 0
        for a in sorted(worker):
            while index < len(jobs) and a >= jobs[index][0]:
                maxProfit = max(maxProfit, jobs[index][1])
                index += 1
            total += maxProfit
        return total
