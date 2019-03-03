class Solution:
    """
    @param nums: an array
    @return: the corresponding expression in string format
    """
    def optimalDivision(self, nums):
        # Write your code here
        s = list(map(str, nums))
        if len(nums) <= 2:
            return '/'.join(s)

        return '{}/({})'.format(s[0], '/'.join(s[1:]))
