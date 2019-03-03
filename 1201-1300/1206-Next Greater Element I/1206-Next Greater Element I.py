class Solution:
    """
    @param nums1: an array
    @param nums2: an array
    @return:  find all the next greater numbers for nums1's elements in the corresponding places of nums2
    """
    def nextGreaterElement(self, nums1, nums2):
        # Write your code here
        St = []
        table = {}
        for i, num in enumerate(nums2):
            while St and nums2[St[-1]] < num:
                table[nums2[St.pop()]] = num
            St.append(i)
        return [table[num] if num in table else -1 for num in nums1]
