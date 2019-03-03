class Solution:
    """
    @param a: the list of salary
    @param target: the target of the sum
    @return: the cap it should be
    """
    def getCap(self, a, target):
        # Write your code here.
        low = 0
        high = (target - 1) // len(a) + 2
        cap = 0
        while low < high:
            mid = (low + high) // 2
            if sum(max(mid, s) for s in a) >= target:
                cap = mid
                high = mid
            else:
                low = mid + 1
        return cap
