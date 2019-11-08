"""
Definition of ListNode
"""
class ListNode(object):
    def __init__(self, val, next=None):
        self.val = val
        self.next = next


class Solution:
    """
    @param head: the head
    @param G: an array
    @return: the number of connected components in G
    """
    def numComponents(self, head, G):
        # Write your code here
        table = set(G)
        count = 0
        while head:
            if head.val in table and (head.next is None or head.next.val not in table):
                count += 1
            head = head.next
        return count
