"""
Definition of ListNode
class ListNode(object):
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
"""

class Solution:
    """
    @param head: the head node
    @return: the middle node
    """
    def middleNode(self, head):
        # write your code here.
        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
        return slow
