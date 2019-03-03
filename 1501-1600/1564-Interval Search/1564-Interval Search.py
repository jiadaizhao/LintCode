class Solution:
    """
    @param intervalList: 
    @param number: 
    @return: return True or False
    """
    def isInterval(self, intervalList, number):
        # Write your code here
        return "True" if any(interval[0] <= number <= interval[1] for interval in intervalList) else "False"
