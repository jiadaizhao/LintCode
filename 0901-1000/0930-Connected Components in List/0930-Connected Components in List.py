"""
Definition of DoublyListNode
"""
class ListNode(object):
    def __init__(self, val, prev=None, next=None):
        self.val = val
        self.prev = prev
        self.next = next


class Solution:
    """
    @param head: the given doubly linked list
    @param nodes: the given nodes array
    @return: the number of blocks in the given array
    """
    def blockNumber(self, head, nodes):
        # write your code here
        table = set(nodes)
        count = 0
        while head:
            if head.val in table and (head.next is None or head.next.val not in table):
                count += 1
            head = head.next
        
        return count
