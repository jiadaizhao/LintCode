class Solution:
    """
    @param sticks: the length of each stick
    @return: return a Integer array
    """
    def CutTheSticks(self, sticks):
        # write your code here
        if not sticks:
            return []
        sticks.sort()
        result = [len(sticks)]
        i = 0
        while i < len(sticks):
            curr = i
            while i + 1 < len(sticks) and sticks[i] == sticks[i + 1]:
                i += 1
            i += 1
            if i != len(sticks):
                result.append(result[-1] - (i - curr))
            
        return result
