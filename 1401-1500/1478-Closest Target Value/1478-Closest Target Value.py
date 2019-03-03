class Solution:
    """
    @param target: the target
    @param array: an array
    @return: the closest value
    """
    def closestTargetValue(self, target, array):
        # Write your code here
        array.sort()
        start = 0
        end = len(array) - 1
        result = None
        while start < end:
            curr = array[start] + array[end]
            if curr == target:
                return target
            elif curr > target:
                end -= 1
            else:
                if result is None or curr > result: 
                    result = curr
                start += 1
        return result or -1
