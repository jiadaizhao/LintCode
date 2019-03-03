class Solution:
    """
    @param nums: an array of positive and negative integers
    @return: if there is a loop in this array
    """
    def circularArrayLoop(self, nums):
        # Write your code here
        def getNext(i):
            return (i + nums[i]) % len(nums)

        for i in range(len(nums)):
            if nums[i] == 0:
                continue
            slow = getNext(i)
            fast = getNext(getNext(i))
            while nums[slow]*nums[i] > 0 and nums[fast]*nums[i] > 0:
                if slow == fast:
                    if slow == getNext(slow):
                        break
                    return True
                slow = getNext(slow)
                fast = getNext(getNext(fast))
            slow = i
            while nums[slow]*nums[i] > 0:
                next = getNext(slow)
                slow = next
                nums[slow] = 0
        return False
