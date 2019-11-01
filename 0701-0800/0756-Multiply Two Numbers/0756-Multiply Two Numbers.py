"""
Definition of ListNode
class ListNode(object):
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
"""

class Solution:
    """
    @param l1: the first list
    @param l2: the second list
    @return: the product list of l1 and l2
    """
    def multiplyLists(self, l1, l2):
        # write your code here
        num1 = 0
        while l1:
            num1 = num1 * 10 + l1.val
            l1 = l1.next

        num2 = 0
        while l2:
            num2 = num2 * 10 + l2.val
            l2 = l2.next

        return num1 * num2
